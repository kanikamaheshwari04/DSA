#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "enter n =";
    cin >> n;
    int dup=n;
    int reverse =0;
    while (n>0){
        int ld= n%10;
        n=n/10;
        reverse=reverse*10+ld;

    }

    if (dup==reverse) {
        cout << "yes";
    }
    else {
        cout << "not";
    }
}
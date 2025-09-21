#include<iostream>
using namespace std;
int main (){
    int n;
    int i;
    cout << "enter n :";
    cin >> n;
    for (i=2;i<n;i++){
        if (n%i==0){
            break;
        }
        
    }
    if (n==i){
            cout << "yes";
        }
        else {
            cout << "not";
        }
   
}

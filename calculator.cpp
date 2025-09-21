#include<iostream>
using namespace std;
int main (){
int a ;
cout << "enter a:";
cin >> a;
int b ;
cout << "enter b:";
cin >> b;
char op ;
cout << "enter op:";
cin >> op;
if (op=='+'){
cout << "a+b="<<(a+b);
}
else if (op=='-'){
cout << "a-b="<<(a-b);
}
else if (op=='*'){
cout << "a*b="<<(a*b);
}
else if (op=='/') {
cout << "a/b="<<(a/b);
}
else {
    cout << "not";
}
}
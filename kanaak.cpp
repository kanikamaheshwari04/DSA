#include<iostream>
#include<string>
using namespace std;

int  binarystring (int lastplace,int n,string ans){
    if (n==0){
        cout<< ans;
        
    }
    if (lastplace !=1){
       
         binarystring(n-1,0,ans+'0'); 
          binarystring(n-1,1,ans+'1');
    }
    else {
 binarystring(n-1,0,ans+'0'); 
    }

}
int main (){
    string ans = " ";
  cout<<  binarystring (3,0,ans);
}
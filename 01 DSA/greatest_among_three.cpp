#include <iostream>
using namespace std;

int main(){
    int a=5, b=1, c=8;
    if(a>b){
        if(a>c){
        cout<<"a is greater";
         }else{
            cout<<"c is greater";
         }
    }else if(b>c){
        cout<<"b is greater";
        }else{
            cout<<"c is greater";
    }
return 0;
}
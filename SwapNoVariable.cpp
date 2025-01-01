//swap using third variable

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"enter two num: "<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
     
    cout<<"After swap a is "<<a<<" b is "<<b<<". ";
return 0;
}
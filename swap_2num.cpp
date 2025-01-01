//swap using third variable

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"enter two num: "<<endl;
    cin>>a>>b;
    c=b;
    b=a;
    a=c;
    cout<<"After swap a is "<<a<<"b is "<<b<<". ";
return 0;
}
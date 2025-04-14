//tell if a triangle is (i)right angled (ii)obtuse triangle (iii) acute triangle

#include <iostream>
using namespace std;

int main(){
    int a,b, c, sum=0;
    cout<<"enter the three angles: "<<endl;
    cin>>a>>b>>c;

    sum= a+b+c; //sum should be 180' to be a triangle

    if(a!= 0 && b!=0 && c!=0 && sum==180){
        cout<<"It's a triangle..."<<endl;
        // condition for equilateral
        if(a>90 || b>90 || c>90 ){
            cout<<"obtuse triangle";
        }
        else if(a< 90 || b<90 || c<90){
            cout<<"acute angle";
        }
        else{
            cout<<"Right angle triangle";
        }
    }else{
        cout<<"Not a triangle";
    }
}
#include <iostream>
#include <vector>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;
 
double pow_x(double x, int n){
    // n is power
    if(n==0) return 1.0; 
    if(x==0) return 1.0;  
    if(x==1) return 1.0;  
    if(x==-1 && n%2 == 0) return 1.0;
    if(x==-1 && n%2 != 0) return 1.0;

    long bf = abs(n);
    double ans = 1.0;

    // if( n < 0 ){
    //     x = 1.0/x;
    //     // bf = -bf;
    // }
     
    //if power is negative, we will do= 3^-5 = (1/3)^5

    while(bf > 0){
        if(bf % 2 == 1){
            ans*= x;
        }
        x *= x;
        bf /= 2;
    }
    return ans;
}

int main(){
   int n = -4;
   int x = 3;
   double res= pow_x(x, n);
   cout<< "result is: "<<res;
   return 0;
 }
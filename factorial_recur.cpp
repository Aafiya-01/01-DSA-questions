// factorial of 'n'

// n= 3 
// f(3,3) -> f(2,3) -> f(1,3) -> f(0,3)== n X fn(n-1) 
// Functional Way

#include <bits/stdc++.h>
using namespace std;

int fact(int n ){
    if(n == 0) return 1;

    return n * fact(n-1);
}
  
int main(){
    int n = 5;
    cout<<"factorial is: "<<  fact(n);

    return 0;
}
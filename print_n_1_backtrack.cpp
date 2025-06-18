// print n to 1

// n= 3 

// f(1,3) -> f(2,3) -> f(3,3) -> f(4,3)

#include <bits/stdc++.h>
using namespace std;

void show(int i , int n){
    if(i > n) return;

    cout<< i<< " "; 
    show(i+1,n);
}
  
int main(){
    int n = 5;
    show(1, n);

    return 0;
}
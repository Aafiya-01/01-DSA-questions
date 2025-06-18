// sum of  1 to n

// n= 3 
// f(3,3) -> f(2,3) -> f(1,3) -> f(0,3) sum+=i
// Functional Way

#include <bits/stdc++.h>
using namespace std;

int sum(int n ){
    if(n == 0) return 0;

    return n + sum(n-1);
}
  
int main(){
    int n = 3;
    cout<<"sum is: "<<  sum(n);

    return 0;
}
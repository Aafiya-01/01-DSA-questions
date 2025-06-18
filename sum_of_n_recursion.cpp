// sum of  1 to n

// n= 3 
//sum = 0 --> n to 1 approach
// f(3,3) -> f(2,3) -> f(1,3) -> f(0,3) sum+=i
// parameterized way

#include <bits/stdc++.h>
using namespace std;

void sum(int i , int total_sum){
    if(i < 1) {
        cout<<"sum is: "<<total_sum;
        return;
    }

    sum(i-1 , total_sum + i);
}
  
int main(){
    int n = 3;
    int s = 0;
    sum(n, s);

    return 0;
}
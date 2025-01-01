/* You are given an integer N. Print numbers from 1 to N without the help of loops.
---------------------------------------------------
Examples:
---------------------------------------------------
Input: N = 5
Output: 1 2 3 4 5  */

// #include<iostream>
// using namespace std;

// void num(int n){
//     if(n==0){
//         return;
//     }
//     num(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     int n=5;
//     num(n);
//     return 0;
// }

#include<iostream>
using namespace std;

void num(int n){
    if(n>0){
         num(n-1);
         cout<<n<<" ";
        }   
    return;
}   

int main(){
    int n=5;
    num(n);
    return 0;
}
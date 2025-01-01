/*You are given an integer N. Print numbers from N to 1 without the help of loops.
------------------------------------------------------
Examples:
------------------------------------------------------
Input: N = 5
Output: 5 4 3 2 1
Explanation: We have to print numbers from 5 to 1.*/

#include<iostream>
using namespace std;

void num(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    num(n-1);
}

int main(){
    int n =10;
    num(n);
    return 0;
}


// #include<iostream>
// using namespace std;

// void num(int n){
//     if(n>0){
//         cout<<n<<" ";
//         num(n-1);
//     }
//     return;
// }

// int main(){
//     int n =10;
//     num(n);
//     return 0;
// }
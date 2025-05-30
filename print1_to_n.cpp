// print n-1 using recursion

#include<bits/stdc++.h>
using namespace std;

void show(int n){
   if(n < 0)  return;

   cout<<n<<endl;
   n--;

   show(n);
}

int main(){
    int n = 10;
    show(n);
    // int n = 10;
    // show(n);
  return 0;
}
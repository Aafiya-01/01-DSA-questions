#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void rev(int a[], int l, int r){
    if(l >= r) return;

    swap(a[l],a[r]);
    rev(a, l+1, r-1);
}

int main(){
    int arr[] = {1,2,3,4,2};
    int n = sizeof(arr)/ sizeof(arr[0]); //size of arr
    // int l= arr[0];
    // int r= arr[n - 1];
    rev(arr, 0, n-1);

    // printinf reversed arr
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;

    return 0;
}
#include<iostream>
using namespace std;

//two-pointer approach

void reverse(int arr[], int size){
    int i=0;
    int last=size-1;
    while(i<last ){
        arr[i]=arr[i]+arr[last];
        arr[last]=arr[i]-arr[last];
        arr[i]=arr[i]-arr[last];
        // swap(arr[i],arr[last])
        i++;
        last--;
    }

}

int main(){
    int arr[]={1,2,3,4,5};
    int sz=5;  
    reverse(arr,sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }

}

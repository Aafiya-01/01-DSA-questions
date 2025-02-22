// Find the Second Largest Element
#include<iostream>
using namespace std;

int main(){
    int n =5;
    int arr[] = {4,1,5,2,3};

//first finding the largest

    for(int i =0; i< n-1; i++){
        for(int j =0 ; j< n-i-1; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

//print the second last address

    cout<<"second largest is: "<< arr[n-2];

    return 0;
}
#include<iostream>
using namespace std;

//arr= {4, 1, 5, 2, 3}

void selectionSort(int arr[], int n ){
   for(int i=0; i< n-1; i++){
        int smallest_num = i;
        for(int j = i+1; j<n; j ++){
            if(arr[j] < arr[smallest_num]){
                smallest_num = j;
            }
        }
        swap(arr[i], arr[smallest_num]);
   }
}

void printarr(int arr[], int n ){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n =5;
    int arr[] = {4,1,5,2,3};

    selectionSort(arr, n);
    printarr(arr, n);

    return 0;
}
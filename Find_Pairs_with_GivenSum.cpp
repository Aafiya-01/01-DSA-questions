// Find Pairs with a Given Sum
#include<iostream>
using namespace std;
bool findpair(int arr[], int &num1, int &num2, int n, int target){
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(arr[i]+arr[j] == target){
                num1= arr[i];
                num2= arr[j];
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={0,2,3,4,5};
    int n = 5;
    int target = 6;

    int num1, num2;
    if(findpair(arr, num1, num2, n, target)){ cout<<num1<<" "<<num2<<endl;}
    else {cout<<"no pair found";}

    return 0;
}
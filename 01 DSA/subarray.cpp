#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 5;
    int arr[5]={1,2,3,4,5};
    // loop to access every sub-arr of an arr
    //first loop for srt= 0 to (n-1)
    for(int srt=0; srt<n; srt++){
        //secind loop for end= srt to (n-1)
        for(int end=srt; end<n; end++){
            //arr k element ko access krne k liye
            for(int i=srt; i<=end; i++){
                cout<< arr[i]; 
            }
            cout<<" ";
        }
        cout<< endl;
    }
    return 0;
}
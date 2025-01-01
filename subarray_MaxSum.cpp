#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main(){
    int n = 7;
    int arr[7]={3, -4, 5, 4, -1, 7, -8};
    int max_sum=INT_MIN;
    for(int srt=0; srt<n; srt++){
            int curr_sum=0;
        for(int end=srt; end<n; end++){
                  curr_sum += arr[end];
                  max_sum= max(curr_sum, max_sum);
        }   
    }
    cout<<"max is: "<< max_sum;
    return 0;
}
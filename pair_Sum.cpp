#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main(){
    int target =  13;
    vector<int> ans ;
    vector<int> arr = {2,7,11,15};
    int n = arr.size();

    for(int i =0 ; i<n ; i++){
        for(int j = i+1 ; j<n; j++){
            if(arr[i]+arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                cout<< ans[0]<<", "<<ans[1];
            }
        }
    }
    return 0;
}
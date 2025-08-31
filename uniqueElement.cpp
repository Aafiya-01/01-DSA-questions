// in a given array every element is present twice, except one element..
// find it and return it!

#include<iostream>
#include<vector>

using namespace std;

// xor operator use kr skte h vo
//  same se same ko cancel krdeta h

int findUnique(vector<int> &arr){
    int ans = 0;

    for(int i =0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout <<uniqueElement;
    return 0;

}
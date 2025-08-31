//  given two arrays a[]={1,2,3,4}, b[]={2,4,7,5}
//  print their intersection 
// ans[]={2,4}

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std; 
int main(){
    vector<int> a = {1,3,2,4};
    vector<int> b = {3,4,6,3};

    vector<int> ans;

// code if duplicate entries are found

    for(int i = 0; i < a.size(); i++){ 
        for(int j = 0; j <b.size(); j++){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
            }
        }
    }
    for(int res : ans){
        cout<<res<<" ";
    }
    return 0;
}
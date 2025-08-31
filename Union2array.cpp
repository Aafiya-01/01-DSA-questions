// given two array a[]={1,2,3,4}, b[]={5,6,7}
// find their union ans[]={1,2,3,4,5,6,7}
// given no duplicates are present 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> a = {2,8,5,6};
    vector<int> b= {1,3,7};
    
// given no duplicates are present 
    vector<int> ans;


    for(int i = 0; i<a.size(); i++){
        ans.push_back(a[i]);
    }
    for(int i = 0; i<b.size(); i++){
        ans.push_back(b[i]);
    }
// merge and sorted array return (we can skip this step)
    sort(ans.begin(), ans.end());

    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<< " ";
    }

}
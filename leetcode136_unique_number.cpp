#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
         int ans=0;
         for(int val: nums){
            ans^=val;
         }
         return ans;
    }

int main() {
    vector <int> vec={1,2,3,4,2,4,1,3};
    cout<< singleNumber(vec);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices) {
        int maxprof = 0;
         
         if (prices.empty()) return 0;
        
        for(int i =1; i< prices.size(); i++){
            if(prices[i] > prices[i-1]){
                maxprof += prices[i] - prices[i-1];
            }
        }
        return maxprof;
    }


int main() {

    vector<int> vec= {100, 180, 260, 310, 40, 535, 695};
    int res = maximumProfit(vec);
    cout<< "maximum profit is: "<< res;
    return 0;
}

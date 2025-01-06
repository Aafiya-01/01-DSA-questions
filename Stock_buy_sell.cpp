#include <iostream>
#include <vector>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;
 
int buy_sell(vector<int>& prices){
      int mp = 0, best_buy = prices[0];
      int n = prices.size();

      for(int i=1; i<n; i++){
        if(prices[i]> best_buy){
          mp = max(mp, prices[i]- best_buy);
        }
          best_buy = min(best_buy, prices[i]);
      }
    return mp;  
};

int main(){
   vector<int> prices={7,1,5,3,6,4};
   int res= buy_sell(prices);
   cout<< "result is: "<<res;
   return 0;
 }
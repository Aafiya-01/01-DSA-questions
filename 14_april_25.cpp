                                
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDigits(int n){
    int cnt = 0;
 
    while(n > 0){
       
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}




                                
                            
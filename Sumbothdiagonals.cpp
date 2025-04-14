// Sum both diagonals

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> mat= {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;
    int sum = 0;
    for(int i = 0; i<n; i++){
        
        for(int j=0; j<n; j++){
            if(i==j){
                sum += mat[i][j];
            }else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }
    cout<<"sum of diagonals are: "<<sum<<endl;
}
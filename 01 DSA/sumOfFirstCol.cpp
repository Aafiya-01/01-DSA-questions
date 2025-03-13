#include<iostream>
#include<vector>

using namespace std;

// Sum of first column

int main(){
    vector<vector<int>> mat=
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    for(int i = 0; i<mat.size(); i++ ){
        int sum = 0;
        for(int j=0; j<mat[i].size(); j++){
            sum += mat[j][i];
        }
        cout<<"sum of first col is: "<<sum <<endl;
        break;
    }
}
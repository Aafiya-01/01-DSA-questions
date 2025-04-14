// Take an N x M matrix as input and check if a given number exists in the matrix and location as well.
#include<iostream>
#include<vector>
using namespace std;

//STL se pair<int, int> use kia h, used to return two values like row and column at the same time..phla item acess krne k liye mat.first or dusre k liye mat.second; 

pair<int, int> searchMatrix(vector<vector<int>>& mat, int n, int m,int target){
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            if(target == mat[i][j]){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int n,m, target;
    cout<<"Enter the number of N: "<<endl;
    cin>>n;
    cout<<"Enter the number of M: "<<endl;
    cin>>m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout<<"Enter matrix element: "<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j< m; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Enter the target value: "<<endl;
    cin>>target;

    pair<int, int> ans = searchMatrix(mat,m, n, target);

    if(ans.first != -1){
        cout<<"YES, found it! the address is: "<< ans.first<<","<< ans.second;
    }
    else{
        cout<<"Not found!"<<endl;
    }
    
    return 0;
}
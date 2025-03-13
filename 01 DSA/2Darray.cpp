#include <iostream>
using namespace std;

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row= 3, col= 3;

    //input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }

    //output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
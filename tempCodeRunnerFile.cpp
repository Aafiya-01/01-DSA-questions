#include <iostream>
using namespace std;

bool linearSearch(int mat[][3], int rows, int col, int key){
        for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int mat[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int col = 3;
    int key = 8;

    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<col; j++){
    //         if(mat[i][j] == key){
    //             cout<<"8 found at: "<<i<<","<<j <<endl;
    //         }
    //     }
    // }
    cout<< linearSearch(mat, rows, col, key)<<endl;
    return 0;
}
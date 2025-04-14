#include <iostream>
using namespace std;

int MaxRowSum(int mat[][3], int rows, int col){
    int max_sum=0;
        for(int i=0; i<rows; i++){
            int sum = 0;
            for(int j=0; j<col; j++){
                sum += mat[i][j];
            }
           max_sum= max(max_sum, sum); 
        }
    return max_sum;
}

int main(){
    int mat[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int col = 3;

    int result= MaxRowSum(mat, rows, col);
    cout<< result <<endl;
    return 0;
}
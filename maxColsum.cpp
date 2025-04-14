#include <iostream>
using namespace std;

int MaxColSum(int mat[][3], int rows, int col){
    int max_sum=0;
        for(int i=0; i<col; i++){
            int sum = 0;
            for(int j=0; j<rows; j++){
                sum += mat[j][i];
            }
           max_sum= max(max_sum, sum); 
        }
    return max_sum;
}

int main(){
    int mat[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int col = 3;

    int result= MaxColSum(mat, rows, col);
    cout<< result <<endl;
    return 0;
}
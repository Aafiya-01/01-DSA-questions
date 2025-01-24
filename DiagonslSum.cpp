#include <iostream>
using namespace std;

int DiagonalSum(int mat[][4], int n){
    int sum = 0;

    //time complexity cuz of two loops = O(n*n)

    // for(int i= 0 ; i<n; i++){
    //     for(int j =0; j<n; j++){
    //         if(i == j ){
    //             sum += mat[i][j];
    //         }else if(j == n-1-i){
    //             sum += mat[i][j];
    //         }
    //     }
    // }
    // return sum;

    //optimised code trying for = O(n)

    for(int i =0; i< n; i++){
        sum += mat[i][i];
    //common value add na ho
        if(i != n-i-1 ){
            sum+= mat[i][n-i-1];
        }
    }
    return sum;
}

int main(){
    int mat[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13,14,15,16}};
    int n= 4;

    int result= DiagonalSum(mat, n);
    cout<< result <<endl;
    return 0;
}
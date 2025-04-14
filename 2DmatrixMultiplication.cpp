// Multiplication of two matrices

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> MatrixMultiplication(vector<vector<int>> mat1, vector<vector<int>> mat2, int r, int c1, int c2){
    vector<vector<int>> product(r, vector<int>(c2, 0));
    for(int i =0; i< r; i++){
        for(int j=0; j< c2; j++){
            for(int k=0; k< c1 ; k++)
            product[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    return product;
}

int main(){
    vector<vector<int>> mat1=
    {{1,2,5},
    {3,4,6}};
    vector<vector<int>> mat2= 
    {{6,7},
    {8,9},
    {1,2}};
    int r = mat1.size();
    int c1 = mat1[0].size();
    int c2 = mat2[0].size();
    vector<vector<int>> result = MatrixMultiplication(mat1, mat2, r, c1, c2);

    cout << "Resultant Matrix:  "<<endl;
    for(int i=0; i<r; i++){
        for(int j =0 ; j<c2; j++){
            cout<< result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
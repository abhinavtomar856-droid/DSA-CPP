#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n = matrix.size();//No of rows
       int m = matrix[0].size();//No of columns

       //Taking the matrix first row as col array and matrix first column as row array to solve the problem
       // int col[n] = matrix[0][..]
       // int row[m] = matrix[..][0]

       int col0 = 1;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                //mark the i-th place
                matrix[i][0] = 0;
                //mark the j-th place

                if(j != 0){
                    matrix[0][j] = 0;
                } 
                else {
                    col0 = 0;
                }
            }
        }
       }

       for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j] != 0){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
       }

       if(matrix[0][0] == 0){
        for(int j=0;j<m;j++){
            matrix[0][j] = 0;
        }
       }

       if(col0 == 0){
        for(int i=0;i<n;i++){
            matrix[i][0] = 0;
        }
       }
    }
};

int main() {
    
    return 0;
}
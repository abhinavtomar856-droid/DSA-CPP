#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();//rows
        
        //Interchange the element or swap [1][0] to [0][1] etc... 
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //Now reverse the each row elements
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

int main() {
    
    return 0;
}
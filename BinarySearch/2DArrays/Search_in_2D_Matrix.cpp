#include <bits/stdc++.h>
using namespace std;

//Time complexity = O(log (N*M))
//Space complexity = O(1)

class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n = mat.size();//No of rows
        int m = mat[0].size();//No of columns
        int low = 0;
        int high = (n*m)-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            int row = mid/m;
            int col = mid%m;
            if(mat[row][col] == target){
                return true;
            }
            else if(mat[row][col] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return false;
    }
};

int main() {
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//Brute force Approach 
//Time complexity = O(n*m)
//Space complexity = O(1).

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size();//No of rows.
        int m = mat[0].size();//No of cols.
        int no_of_ones = 0;
        int cur_index = 0;

        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > no_of_ones){
                no_of_ones = count;
                cur_index = i;
            }
        }
        if(no_of_ones == 0){
            return -1;
        }
        else{
            return cur_index;
        }
    };
};

int main() {
    
    return 0;
}
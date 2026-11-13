#include <bits/stdc++.h>
using namespace std;

//Optimal Solution
//Time complexity = O(n) * O(log2 M);
//Space complexity = O(1).

int lowerBound(vector<int> arr,int n,int x){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= x){
            //Search for smallest idx.
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int no_of_ones = 0;
        int index = -1;
        for(int i=0;i<n;i++){
            int count_ones = m - lowerBound(mat[i],m,1);
            if(count_ones > no_of_ones){
                no_of_ones = count_ones;
                index = i;
            }
        } 
        return index;
    };
};


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
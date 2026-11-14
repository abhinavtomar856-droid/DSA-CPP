#include <bits/stdc++.h>
using namespace std;

//Optimal Solution
//TIme complexity = O(log 10^9) * O(n * log2m).
//Space complexity = O(1).

int upperBound(vector<int> &nums, int n,int x){
       int left = 0;
       int right = n-1;
       int ans = n;
       while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] > x){
                ans = mid;
                right = mid -1;
            }
            else{
                left = mid + 1;
            }
       }
       return ans;
}   

int countSmallEqauls(vector<vector<int>> &matrix,int n,int m,int x){
    int count = 0;
    for(int i=0;i<n;i++){
        count += upperBound(matrix[i],m,x);
    }
    return count;
}

class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
        int low = INT_MAX;
        int high = INT_MIN;
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0;i<n;i++){
            low = min(low,matrix[i][0]);
            high = max(high,matrix[i][m-1]);
        }
        int req = (n*m)/2;
        while(low <= high){
            int mid = low + (high - low)/2;
            int smallEquals = countSmallEqauls(matrix,n,m,mid);
            if(smallEquals <= req){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    };
};

//Brute Force Approach.
//Time complexity = O(n*m) + O(n8m log(n*m));
//Space complexity = O(1).

class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
        int n = matrix.size();
        int m = matrix[1].size();
        vector<int> nums;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                nums.push_back(matrix[i][j]);
            }
        }
        sort(nums.begin(),nums.end());
        return nums[(n*m)/2];
    };
};

int main() {
    
    return 0;
}
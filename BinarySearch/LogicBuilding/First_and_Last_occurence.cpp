#include <bits/stdc++.h>
using namespace std;

//Second Solution without using built in and if interview don t know about upper and lower bound.
//Time complexity = O(logN);
//Space complexity = O(1);
#include<bits/stdc++.h>
class Solution{
public:
    int lowerBound(vector<int> &nums,int target){
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int first = -1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                first = mid;
                right = mid -1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return first;
    }

    int upperBound(vector<int> &nums,int target){
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int last = -1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                last = mid;
                left = mid +1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int> &nums, int target) {
        int lb = lowerBound(nums,target);
        if(lb == -1){
            return {-1,-1};
        }
        int ub = upperBound(nums,target);
        return{lb,ub};
    };   
};

//first solution.
//Time complexity = O(logN);
//Space complexity = O(1);
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> pos;
        int n = nums.size();
        int lb = lower_bound(nums.begin(),nums.end(),target) - nums.begin();//O(logN)
        int ub = upper_bound(nums.begin(),nums.end(),target) - nums.begin();//O(logN)
        if(lb == n || nums[lb] != target){
            return {-1,-1};
        }
        pos.push_back(lb);
        pos.push_back(ub-1);
        return pos;
    };    
};

int main() {
    
    return 0;
}
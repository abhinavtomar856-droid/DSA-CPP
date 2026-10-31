#include <bits/stdc++.h>
using namespace std;

//first solution.
//Time complexity = O(logN)
//Space complexity = O(1)
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
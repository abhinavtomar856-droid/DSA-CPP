#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            bool leader = true;
            for(int j=i+1;j<n;j++){
                if(nums[i] <= nums[j]){
                    leader = false;
                    break;
                }
            }
            if(leader){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    };
};

int main() {
    return 0;
}
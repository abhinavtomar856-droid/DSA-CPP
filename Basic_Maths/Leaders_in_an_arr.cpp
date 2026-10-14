#include <bits/stdc++.h>
using namespace std;

//Optimal Solution
//T.L = O(n) + O(n) = 0(2n) = O(n)
//S.L = 0(n) in worst case and in order to return not solving the problem

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        //Pointing to last element as pointer or tracker
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i] > maxi){
                ans.push_back(nums[i]);
                maxi = nums[i];
            }
        };

        //To reverse an array only not solving for question
        int l = ans.size();
        int i=0;
        while(i<l/2){
            int temp = ans[i];
            ans[i] = ans[l-i-1];
            ans[l-i-1] = temp;
            i++;
        }
        return ans;
    };
};

//Brute Force apporach
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
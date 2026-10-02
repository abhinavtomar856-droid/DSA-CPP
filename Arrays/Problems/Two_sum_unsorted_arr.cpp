#include <bits/stdc++.h>
using namespace std;

//Time Complexity-O(n) + O(n logn)
//Space Complexity - O(n)
#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       vector<pair<int,int>> vec;
       for(int i=0;i<nums.size();i++){
        vec.push_back({nums[i],i});
       }

       sort(vec.begin(),vec.end());
       //Two pointer
       int left = 0;
       int right = vec.size()-1;

       while(left < right){
        int sum = vec[left].first + vec[right].first;
        if(sum == target){
            return{vec[left].second,vec[right].second};
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
       }
       return{};
    };
};

int main() {
    
    return 0;
}
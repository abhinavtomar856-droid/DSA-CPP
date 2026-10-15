#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> pos_arr;
       vector<int> neg_arr;
       vector<int> res_arr;
       int n = nums.size();

       for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos_arr.push_back(nums[i]);
        }
        else{
            neg_arr.push_back(nums[i]);
        }
       }

       for(int i=0;i<n/2;i++){
        res_arr.push_back(pos_arr[i]);
        res_arr.push_back(neg_arr[i]);
       }

       return res_arr;
    };
};

int main() {
    
    return 0;
}
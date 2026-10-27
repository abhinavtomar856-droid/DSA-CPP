#include <bits/stdc++.h>
using namespace std;

//only for postive numbers and zero but an optimal solution
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int l = 0;
        int r = 0;
        int sum = nums[0];
        int max_len = 0;
        while(r<n){
            while(l<=r &&  sum > k){
                sum = sum - nums[l];
                l++;
            }
            if(sum == k){
                max_len = max(max_len,r-l+1);
            }
            r++;
            if(r<n){
                sum = sum + nums[r];
            }
        }
        return max_len;
    };
};

//better solution but works for every case if arr has postive negative zero elements
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        map<int,int> preSummap;
        int sum = 0;
        int max_len = 0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            if(sum == k){
                max_len = max(max_len,i+1);
            }
            int rem = sum - k;
            if(preSummap.find(rem) != preSummap.end()){
                int len = i - preSummap[rem];
                max_len = max(max_len,len);
            }
            if(preSummap.find(sum) == preSummap.end()){
                preSummap[sum] = i;
            }
        }
        return max_len;
    };
};



int main() {
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
long long sumByD(vector<int> nums,int mid){
    long sum = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        sum += ceil((double)(nums[i])/(double)(mid));
    }
    return sum;
}

class Solution {
public:
int minimumRateToEatBananas(vector<int> nums, int h) {
    int low = 1;
    int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            if(sumByD(nums,mid) <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    
    return 0;
}
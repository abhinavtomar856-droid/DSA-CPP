#include <bits/stdc++.h>
using namespace std;


//Optimised Solution.
#include <bits/stdc++.h>
int sumByD(vector<int> nums,int mid){
    int n = nums.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + ceil(nums[i]/(double)mid);
    }
    return sum;
}

class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit){
        int n = nums.size();
        
        //Divisor does not exist.
        if(n>limit){
            return -1;
        }
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            if(sumByD(nums,mid) <= limit){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

//Brute Force Approach.
class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
    int n = nums.size();
    int maxi = *max_element(nums.begin(),nums.end());
        for(float i=1.0;i<=maxi;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                sum = sum + ceil(nums[j]/i);
            }
            if(sum <= limit){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//Brute Force solution
//Time complexity exceed
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //outer loop
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=i;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                };
                if(count > n/2){
                    return nums[i];
                };
            };
        };
    };
};

//Optimal Solution
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element;
        int count = 0;
        for(int i=0;i<n;i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }
            else if(nums[i] == element){
                count++;
            }
            else{
                count--;
            }
        }

        int count1 = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == element){            
                count1++;
            }
        }
        if(count1 > n/2){
            return element;
        };
    };
};

int main() {
    
    return 0;
}
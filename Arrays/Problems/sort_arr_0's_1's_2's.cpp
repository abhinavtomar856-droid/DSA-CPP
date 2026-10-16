#include <bits/stdc++.h>
using namespace std;

//First solution
#include<bits/stdc++.h>
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {   
        sort(nums.begin(),nums.end());
    }
};

//Second Solution
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        //Selection sort
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<i;j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
    };
};

int main() {
    
    return 0;
}
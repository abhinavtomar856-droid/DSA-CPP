#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums,int low,int high){
        int i = low;
        int j = high;
        int pivot = nums[low];

        while(i<j){
            while(nums[i] <= pivot && i<=high-1){
                i++;
            }
            while(nums[j] > pivot && j>=low+1){
                j--;
            }

            if(i<j){
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[low],nums[j]);
        return j;
    }

    void qs(vector<int> &nums,int low,int high){
        if(low < high){
            int partIdx = partition(nums,low,high);
            qs(nums,low,partIdx-1);
            qs(nums,partIdx+1,high); 
        }
    }

    void sortColors(vector<int>& nums) {
        qs(nums,0,nums.size()-1);
    };


int main() {
    vector<int> nums = {45,23,1,56,7,8};
    qs(nums,0,nums.size()-1);
    for(int val : nums){
        cout << val << endl;
    }
    
    return 0;
}
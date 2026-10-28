#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums,int low,int high,int target){
        int mid = low + (high - low)/2;
        while(low<high){
        if(low>high){
            return -1;
        }
        if(nums[mid] > target){
            return binarySearch(nums,low,mid-1,target);
        }
        else if(nums[mid] < target){
            return binarySearch(nums,mid+1,high,target);
        }
        else{
            return mid;
        }
    }
}

int main(){
    vector<int> nums = {3,4,6,7,9,12,16,17};
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int target = 12;
    int x = binarySearch(nums,low,high,target);
    cout << "Number found at index:" << x << endl;
    return 0;
}
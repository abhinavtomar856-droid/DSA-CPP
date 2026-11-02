#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr)  {
        int n = arr.size();
        int left = 0;
        int right = n-1;
        int ans = INT_MAX;
        while(left<=right){
            int mid = left + (right - left)/2;

            //If arr is already sorted arr[left] is the minium element in the arr.
            if(arr[left] <= arr[right]){
                ans = min(ans,arr[left]);
                return ans;
            }

            //Left half arr is sorted takes the min and elimate the left half of the arr.
            if(arr[left] <= arr[mid]){
                ans = min(ans,arr[left]);
                left = mid + 1;
            }
            //Right half is sorted takes the min and elimnate the right half of the arr.
            else{
                ans = min(ans,arr[mid]);
                right = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    
    return 0;
}
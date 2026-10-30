#include <bits/stdc++.h>
using namespace std;

//Optimised solution using binary search
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
       int n = nums.size();
       int left = 0;
       int right = n-1;
       int ans = n;
       while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] > x){
                ans = mid;
                right = mid -1;
            }
            else{
                left = mid + 1;
            }
       }
       return ans;
    };    
};

//Brute Force appoarch using linear search.
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] > x){
                return i;
            }
        }
        return n;
    }
};

int main() {
    //Upper bound is also found using built in method
    vector<int> vec = {1,2,2,3};
    int ub = upper_bound(vec.begin(),vec.end(),1) - vec.begin();
    cout << "index is: " << ub << endl;
    return 0;
}
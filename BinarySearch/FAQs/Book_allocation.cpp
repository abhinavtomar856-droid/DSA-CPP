#include <bits/stdc++.h>
using namespace std;

//Time Complexity = O(log(sum-max+1) x O(N).
//Space Complexity = O(1).
#include<bits/stdc++.h>
int noOfStudents(vector<int> nums,int pages){
    int student = 1;
    long long pagesStudnet = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(pagesStudnet + nums[i] <= pages){
            pagesStudnet += nums[i];
        }
        else{
            student++;
            pagesStudnet = nums[i];
        }
    }
    return student;
}

class Solution {
public:
    int findPages(vector<int> &nums, int m)  {
        int n = nums.size();
        if(n<m){
            return -1;
        }
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low <= high){
            int mid = low + (high - low)/2;
            if(noOfStudents(nums,mid) > m){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};

int main() {
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


//Time complexity = O(logN) + O(N)
//Space complexity = O(1).
int noOfSubarrs(vector<int> &a,int sum){
    int n = a.size();
    int s = 0;
    int subarr = 1;
    for(int i=0;i<n;i++){
        if(s + a[i] <= sum){
            s += a[i];
        }
        else{
            subarr++;
            s = a[i];
        }
    }
    return subarr;
}

class Solution {
public:
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int low = *max_element(a.begin(),a.end());
        int high = accumulate(a.begin(),a.end(),0);
        while(low <= high){
            int mid = low + (high - low)/2;
            if(noOfSubarrs(a,mid) > k){
                low  = mid + 1;
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
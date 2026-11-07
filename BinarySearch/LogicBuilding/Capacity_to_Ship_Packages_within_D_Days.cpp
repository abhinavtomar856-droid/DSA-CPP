#include <bits/stdc++.h>
using namespace std;

//Time Complexity = O(Log(sum-max+1)) x O(N).
//Space Complexity = O(1).

#include<bits/stdc++.h>
int noOfDays(vector<int> weights,int minweight){
    int days = 1;
    int load = 0;
    int n = weights.size();
    for(int i=0;i<n;i++){
        if(load + weights[i] > minweight){
            days = days + 1;
            load = weights[i];
        }
        else{
            load = load + weights[i];
        }
    }
    return days;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low <= high){
            int mid = low + (high - low )/2;
            if(noOfDays(weights,mid) <= days){
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
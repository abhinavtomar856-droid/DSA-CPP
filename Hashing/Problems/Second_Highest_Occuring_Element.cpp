#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;

        //Frequency of each element
        for(int i=0;i<n;i++){
            mpp[nums[i]] += 1;
        }
        int max_count = 0;
        int el = -1;

        for(auto it : mpp){
            if(it.second > max_count){
                max_count = it.second;
                el = it.first;
            }
        }

        int sec_max_count = 0;
        int sec_el = -1;
        
        for(auto it : mpp){
            if(it.second < max_count && it.second > sec_max_count){
                sec_max_count = it.second;
                sec_el = it.first;
            }
        }
        return sec_el;
    };
};

int main() {
    
    return 0;
}
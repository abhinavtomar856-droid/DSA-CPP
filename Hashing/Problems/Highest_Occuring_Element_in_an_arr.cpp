#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;

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
        return el;
    }
};

int main() {
    
    return 0;
}
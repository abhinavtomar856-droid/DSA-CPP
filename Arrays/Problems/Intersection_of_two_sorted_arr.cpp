#include <bits/stdc++.h>
using namespace std;

//Time complexituy - O(n1+n2)
//Space complexity - O(1)
class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        //Two pointers
       int i =0;
       int j=0;
       vector<int> resArr;
       while(i<n1 && j<n2){
        if(nums1[i] < nums2[j]){
            i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            resArr.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return resArr;
    };
};

int main() {
    
    return 0;
}
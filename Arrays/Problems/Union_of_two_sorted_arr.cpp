#include <bits/stdc++.h>
using namespace std;

//Burte force solution
//Time complexity - O(n1 + n2)
//Space complexity - O(n1 + n2)
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> st;
        for(int i=0;i<n1;i++){
            st.insert(nums1[i]);
        };    

        for(int i=0;i<n2;i++){
            st.insert(nums2[i]);
        };

        vector<int> temp;
        for(auto val : st){
            temp.push_back(val);
        };

        return temp;
        };
};

//Optimal Solution
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        //Two Pointers
        int i = 0;
        int j = 0;
        vector<int> unionArr;
        while((i<n1) && (j<n2)){
            if(nums1[i] <= nums2[j]){
                if(unionArr.size() == 0 || unionArr.back() != nums1[i]){
                    unionArr.push_back(nums1[i]);
                }
                i++;
            } else{
                if(unionArr.size() == 0 || unionArr.back() != nums2[j]){
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(j<n2){
                if(unionArr.size() == 0 || unionArr.back() != nums2[j]){
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }    

        while(i<n1){
            if(unionArr.size() == 0 || unionArr.back() != nums1[i]){
                unionArr.push_back(nums1[i]);
            }
            i++;
        }    
        return unionArr;
    };
};

int main() {
    
    return 0;
}
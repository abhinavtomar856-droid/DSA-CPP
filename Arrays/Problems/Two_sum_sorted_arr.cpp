#include <bits/stdc++.h>
using namespace std;

//Time complexity - O(n)
//Space complexity - O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()-1;
        while(start < end){
            int sum = numbers[start] + numbers[end];
            if(sum == target){
                return {start+1,end+1};
            }
            else if(sum < target){
                start++;
            }
            else {
                end--;
            };
        };
        return {};
    };
};


int main() {
    
    return 0;
}
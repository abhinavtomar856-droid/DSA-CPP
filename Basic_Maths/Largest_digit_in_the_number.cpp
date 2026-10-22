#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int maxi_dig = 0;
        while(n>0){
            int last_dig = n%10;
            if(maxi_dig<last_dig){
                maxi_dig = last_dig;
            }
            n = n/10;
        }
        return maxi_dig;
    }
};

int main() {
    
    return 0;
}
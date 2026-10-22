#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        int count = 0;
        while(n>0){
            int last_dig = n%10;
            if((last_dig%2) != 0){
                count++;
            }
            n = n/10;
       }
       return count;
    }
};

int main() {
    
    return 0;
}
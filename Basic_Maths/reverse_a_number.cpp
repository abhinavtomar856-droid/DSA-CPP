#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int rev_num = 0;
        while(n>0){
            int last_dig = n%10;
            n = n/10;
            rev_num = (rev_num * 10) + last_dig;
        }
        return rev_num;
    };
};

int main() {
    
    return 0;
}
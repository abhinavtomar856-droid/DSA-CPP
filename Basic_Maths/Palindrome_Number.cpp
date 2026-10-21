#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int a = n;
        int rev_num = 0;
        while(n>0){
            int last_dig = n%10;
            rev_num = rev_num*10 + last_dig;
            n = n/10;
        }

        if(rev_num != a){
            return false;
        }else {
            return true;
        }
    }
};

int main() {
    
    return 0;
}
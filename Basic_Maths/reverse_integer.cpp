#include <bits/stdc++.h>
using namespace std;

#include <climits>
class Solution {
public:
    int reverse(int x) {
      int rev_num = 0;
      long a = x;
      a = abs(a);
      while(a>0){
        int last_dig = a%10;
        a = a/10;
        if(rev_num > (INT_MAX-last_dig)/10){
            return 0;
        }
        rev_num = (rev_num*10) + last_dig;
      }

      if(x<0){
        return -rev_num;
      }

      return rev_num;
    };
};

int main() {
    
    return 0;
}
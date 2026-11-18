#include <bits/stdc++.h>
using namespace std;

//Time complexity = O(2^n)
//Space complexity = O(1)

class Solution {
public:
    int fib(int n) {
      //Base case1  
      if(n==1){
        return 1;
      } 
      //Base case 2
      if(n==0){
        return 0;
      }
      return fib(n-1) + fib(n-2);
    }
};

int main() {
    
    return 0;
}
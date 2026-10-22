#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        int fact = 1;
        for(int i=n;i>=1;i--){
            fact = fact*i;
        }
        return fact;
    }
};

int main() {
    
    return 0;
}
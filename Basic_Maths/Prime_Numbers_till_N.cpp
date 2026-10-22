#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int primeUptoN(int n) {
        int count_prime = 0;

        for(int i=1;i<=n;i++){
            int count_factor = 0;
            for(int j=1;j<=i;j++){
                if(i%j == 0){
                    count_factor++;
                }
            }
            if(count_factor == 2){
                count_prime++;
            }
        }
        return count_prime;
    }
};

int main() {
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//Sieve of Eratosthenes is the algorithm to find to the prime numbers in the range to n
//Time Complexity is O(Nlog(logn))
//Space Complexity is O(1)
class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1){
            return 0;
        }
        int prime[n+1];
        for(int i=2;i<n;i++){
            prime[i] = 1;
        }

        for(int i=2;i*i<=n;i++){
            if(prime[i] == 1){
                for(int j=i*i;j<=n;j+=i){
                    prime[j] = 0;
                }
            }
        }

        int count_prime = 0;
        for(int i=2;i<n;i++){
            if(prime[i] == 1){
                count_prime++;
            }
        }
        return count_prime;
    }
};

int main() {
    
    return 0;
}
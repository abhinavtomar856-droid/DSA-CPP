#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
class Solution {
public:
    bool isArmstrong(int n) {
        int a = n;
        int b = n;
        //Count how many digits number have
        int digit = 0;
        while(a!=0){
            a = a/10;
            digit++;
        }

        int sum = 0;
        while(b>0){
            int last_dig = b%10;
            sum = sum + pow(last_dig,digit);
            b = b/10;
        }

        if(sum == n){
            return true;
        }else{
            return false;
        }

    }
};

int main() {
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//Time complexity = O(log10 N)
//Space complexity = O(1)

class Solution{
public:
	int addDigits(int num){
        //Base Case.
		if(num < 10){
            return num;
        }
        int sum = 0;
        int n = num;
        while(n>0){
            int last_dig = n % 10;
            sum = sum + last_dig;
            n = n/10;
        }
        return addDigits(sum);
	}
};

int main() {
    
    return 0;
}
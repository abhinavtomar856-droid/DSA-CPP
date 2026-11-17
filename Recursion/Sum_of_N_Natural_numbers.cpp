#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
     int sum = 0;
		int NnumbersSum(int N){
            if(N==0){
                return sum; 
            }
            sum = sum + N;
            return NnumbersSum(N-1);
        }
};

int main() {
    
    return 0;
}
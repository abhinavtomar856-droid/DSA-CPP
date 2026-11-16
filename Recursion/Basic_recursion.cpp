//What is recursion.
//When function repeatdly calls itself under the base condition met.

#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    //Base Case
    if(n==0 || n==1){
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    int ans = factorial(5);
    cout << ans << endl;
    return 0;
}

//What exactly recursion do?
//It is a method of solving a computational problems where the solution depends on solution of smaller instances of the 
//same problem.
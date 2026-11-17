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

///Stack Overflow
//In cpp , stack overflow occurs when the program exceeds its allocated memory.

//When it happens
// 1 when the base case is missing in the infinite recursion
//2 Local variables are created on the stack by default
//What is recursion.
//When function repeatdly calls itself until the specify condition met.

// #include <bits/stdc++.h>
// using namespace std;

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

//Print 1 to N using recursion

#include <iostream>
using namespace std;

void print(int i, int N) {
    if (i > N) {
        return;  
    }    
    cout << i << " ";      
    print(i + 1, N);         
}

int main() {
    print(1, 4);
    return 0;
}

//Print 1 to N using backtracking.
#include <iostream>
using namespace std;

void print(int i) {
    if (i == 0) {
        return;   
    }
    print(i - 1); 
    cout << i << " ";   
}

int main() {
    print(4);
    return 0;
}

//Print N to 1 using backtracking.

#include <bits/stdc++.h>
using namespace std;

void printRev(int i,int n){
    if(i>n){
        return;
    }
    printRev(i+1,n);
    cout << i << endl;
}

int main() {
    printRev(1,3);
    return 0;
}


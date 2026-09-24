#include <iostream>
using namespace std;

// //Recursion Function
int count = 0;
void print() {
    //Base case or condition
    if(count == 3){
        return;
    }else{
        cout << count << endl;
        count ++ ;
        print();
    };
};

int main() {
    print();
    return 0;
}


//Print the factorial of number using recursion
int Factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * Factorial(n-1);
};

int main() {
    cout << Factorial(4) << endl;
    return 0;
}
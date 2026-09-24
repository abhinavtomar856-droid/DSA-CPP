#include <iostream>
using namespace std;

//Ques1 Print the sum of N numbers using Recursion
//Functional Recursion
// int Sum(int n) {
//     if(n == 0){
//         return 0;
//     } else {
//         return n + Sum(n-1);
//     };

// };

// int main() {
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;
//     cout << "Sum of Numbers is: " << Sum(n) << endl;
//     return 0;
// }

// //Parameterised Recursion
// void printSum(int n , int sum ){
//     if(n<1){
//         cout << sum << endl;
//         return;
//     };
//     printSum(n-1,sum+n);
// };

// int main() {
//     int n;
//     int sum = 0;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;
//     printSum(n,sum);
// };

//Ques2 Print the factorial of N
//Functional Recursion
// int Factorial(int n){
//     if(n == 0) {
//         return 1;
//     } else {
//         return n * Factorial(n-1);
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;
//     cout << "Value is : " << Factorial(n) << endl;
//     Factorial(n);
// };

//Parameterised Recursion
// int fact = 1;
// void Factorial(int i ,int n) {
//     if(i>n){
//         cout << fact << endl;
//         return;
//     }
//     fact = fact * i;
//     Factorial(i+1,n);
// };

// int main() {
//     int n;
//     cout << "Enter the value of n : " << endl;
//     cin >> n;
//     Factorial(1,n);
//     return 0;
// }
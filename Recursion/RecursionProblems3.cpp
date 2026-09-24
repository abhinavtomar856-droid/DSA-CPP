#include <iostream> 
#include <string>
using namespace std;

//Ques 1 
//Reverse an array using recursion
// void revArr(int i,int arr[],int n) {
//     if(i>=n){
//         return;
//     }
//     int swap = arr[i];
//     arr[i] = arr[n];
//     arr[n] = swap;
//     revArr(i+1,arr,n-1);
// }
// int main() {
//     int arr[5] = {4,52,24,1,34};
//     revArr(0,arr,4);
//     for(int val : arr){
//         cout << val << endl;
//     };
//     return 0;
// };

//Ques 2
//Check whether the string is palindrome or not using recursion
// bool checkPalindrome(int i,string s) {
//     if(i>=s.size()/2){
//         return true;
//     }
//     if(s[i] != s[s.size()-i-1]){
//         return false;
//     } else {
//         return checkPalindrome(i+1,s);
//     };
// };


// int main() {
//     string a = "MADAM";
//     int n = a.length();
//     cout << checkPalindrome(0,a) << endl;
//     return 0;
// }

//Multiple recursive function calls
int Fibonacci(int n) {
    if(n<=1){
        return n;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << Fibonacci(n) << endl;
}
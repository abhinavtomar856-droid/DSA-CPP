#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        int i = 0;
        while(i < n/2){
            int temp = arr[i];
            arr[i] = arr[n-(i+1)];
            arr[n-(i+1)] = temp;
            i++;
        };  
    };
};

int main() {
    
    return 0;
}
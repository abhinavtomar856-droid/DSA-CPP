#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        //Bubble Sort
        for(int i=n-1;i>=1;i--){
            for(int j=0;j<i;j++){
                if(arr[j] > arr[j+1]){
                    return false;
                };
            };
        };
        return true;  
    };
 };

int main() {
    
    return 0;
}
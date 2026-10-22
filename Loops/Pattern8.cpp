#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
         int stars = 2*n-1;
        //Outer Loop
        for(int i=1;i<=n;i++){
            //First Inner Loop for spaces
            for(int j=1;j<=i-1;j++){
                cout << " ";
            };

            //Second Inner Loop for stars
            for(int j=1;j<=stars;j++){
                cout << "*";
            };

            //Third Inner loop for spaces
            for(int j=1;j<=i-1;j++){
                cout << " ";
            };
            cout << endl;
            stars -= 2;
        };
    };
};

int main() {
    
    return 0;
}
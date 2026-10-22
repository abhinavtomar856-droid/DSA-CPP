#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern10(int n) {
        //Upper Pattern
        //Outer Loop
        for(int i=1;i<=n;i++){
            //Inner loop
            for(int j=1;j<=i;j++){
                cout << "*";
            };
            cout << endl;
        };

        //Lower Pattern
        //Outer Loop
        for(int i=n-1;i>=1;i--){
            //Inner Loop
            for(int j=1;j<=i;j++){
                cout << "*";
            };
            cout << endl;
        };
    };
};

int main() {
    
    return 0;
}
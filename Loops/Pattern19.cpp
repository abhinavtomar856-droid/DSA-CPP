#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
        //Upper pattern
        //Outer Loop
        for(int i=n;i>=1;i--){
            //Inner Loop for stars
            for(int j=1;j<=i;j++){
                cout << "*";
            };

            //Inner Loop for spaces
            for(int j=1;j<=(n-i)*2;j++){
                cout << " ";
            };
            //Inner loop for stars
            for(int j=1;j<=i;j++){
                cout << "*";
            };
             cout << endl;
        };

        int spaces = 2*(n-1);
        for(int i=1;i<=n;i++){
            //Inner loop for stars
            for(int j=1;j<=i;j++){
                cout << "*";
            };

            for(int j=1;j<=spaces;j++){
                cout << " ";              
            };
            
            for(int j=1;j<=i;j++){
                cout << "*";
            };
            spaces -= 2;  
            cout << endl;
        };
    };
};

int main() {
    
    return 0;
}
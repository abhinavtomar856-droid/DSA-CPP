#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern20(int n) {
        //Upper pattern
        //Outer Loop
        int spaces = 2 *(n-1);
        for(int i=1;i<=n;i++){
            //Inner Loop for stars
            for(int j=1;j<=i;j++){
                cout << "*";
            };

            //Inner Loop for spaces
            for(int j=1;j<=spaces;j++){
                cout << " ";
            };

            //Inner Loop for stars
            for(int j=1;j<=i;j++){
                cout << "*";
            };
            cout << endl;
            spaces -= 2;
        };

        //Lower pattern
        //Outer loop
        int spaces2 = 2;
        for(int i=n-1;i>=1;i--){
            //Inner loop for stars
            for(int j=1;j<=i;j++){
                cout << "*";
            };

            //Inner loop for spaces
            for(int j=1;j<=spaces2;j++){
                cout << " ";
            };

            //Inner loop for stars
            for(int j=1;j<=i;j++){
                cout << "*";
            };
            cout << endl;
            spaces2 +=2;
        };
    };
};

int main() {
    
    return 0;
}
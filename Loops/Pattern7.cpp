#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern7(int n) {
        //Outer Loop
        for(int i=1;i<=n;i++){
            //First Inner Loop for spaces
            for(int j=1;j<=n-i;j++){
                cout << " ";
            };
            //Second Inner Loop for stars
            for(int j=1;j<=2*i-1;j++){
              cout << "*";
            };
            //Third Inner Loop for spaces
            for(int j=1;j<=n-i;j++){
                cout << " ";
            };
        cout << endl;
        };
    };
};

int main() {
    
    return 0;
}
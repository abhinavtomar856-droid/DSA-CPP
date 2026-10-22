#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern12(int n) {
        //Outer Loop
        int spaces = 2*(n-1);
        for(int i=1;i<=n;i++){
            //First Inner Loop
            for(int j=1;j<=i;j++){
                cout << j;
            };

            //Second Inner loop for spaces
            for(int j=1;j<=spaces;j++){
                cout << " ";
            };

            //Third Inner loop
            for(int j=i;j>=1;j--){
                cout << j;
            };
            cout << endl;
            spaces -= 2;
        };
    };
};

int main() {
    
    return 0;
}
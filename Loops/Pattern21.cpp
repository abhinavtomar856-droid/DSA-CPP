#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern21(int n) {
        //Outer loop
        for(int i=1;i<=n;i++){
            if(i==1 || i==n){
                for(int j=1;j<=n;j++){
                    cout << "*";
                };
            }else{
                //Inner loop for stars
                for(int j=1;j<=1;j++){
                    cout << "*";
                };

                //Inner loop for spaces
                for(int j=1;j<=n-2;j++){
                    cout << " ";
                };
                //Inner loop for stars
                for(int j=1;j<=1;j++){
                    cout << "*";
                };
            };
            cout << endl;
        };
    };
};

int main() {
    
    return 0;
}
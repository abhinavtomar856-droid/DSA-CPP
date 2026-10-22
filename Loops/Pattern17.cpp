#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        //Outer Loop
        for(int i=1;i<=n;i++){
            //First Inner loop for spaces
            for(int j=1;j<=n-i;j++){
                cout << " ";
            };
            //Second Inner Loop for characters
            char ch = 'A';
            int breakpoint = ((2*i)-1 )/2;
            for(int j=1;j<=(2*i)-1;j++){
                cout << ch;
                if(j<=breakpoint){
                    ch++;
                }else{
                    ch--;
                };
            };
            //Third Inner loop for spaces
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
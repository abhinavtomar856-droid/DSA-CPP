#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2 == 0){
                    cout << "1";
                    cout << " ";
                }else {
                    cout << "0";
                    cout << " ";
                };
            };
            cout << endl;
        };
    };
};

int main() {
    
    return 0;
}
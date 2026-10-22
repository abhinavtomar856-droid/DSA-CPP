#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
        int a = 65;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                char ch = (char)a;
                cout << ch;
            };
            a+=1;
            cout << endl;
        };
    };
};

int main() {
    
    return 0;
}
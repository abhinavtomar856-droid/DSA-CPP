#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        int a = 65;
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                char ch = (char)a;
                cout << ch;
                a+=1;
            };
            a=65;
            cout << endl;
        };
    };
};

int main() {
    
    return 0;
}
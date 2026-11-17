#include <bits/stdc++.h>
using namespace std;

int printRev(int n){
    //Base case
    if(n==1){
        return 1;
    }
    cout << n << endl;
    printRev(n-1);
}
int main() { 
    int ans = printRev(5);
    cout << ans << endl;
    return 0;
}

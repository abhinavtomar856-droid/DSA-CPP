#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {45,3,46,74,1};
    int mini = *min_element(a,a+5);
    int max = *max_element(a,a+5);

    cout << "Minium element is: " << mini << endl;
    cout << "Maxium element is: " << max << endl;
    cout << "Hello World" << endl;
    return 0;
}
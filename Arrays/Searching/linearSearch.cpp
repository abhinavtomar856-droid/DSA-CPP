#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int search = 300;
    bool found = false;

    for(int i = 0; i < n; i++) {

        if(arr[i] == search) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element not found" << endl;
    }
    return 0;
}
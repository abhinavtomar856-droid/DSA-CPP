#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n]; 

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter how many values to check" << endl;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << "Number of times it appears" << endl;
        cout << hash[number] << endl;
    }
    return 0;
}
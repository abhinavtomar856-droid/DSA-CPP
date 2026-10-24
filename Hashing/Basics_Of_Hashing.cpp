#include <bits/stdc++.h>
using namespace std;

//Integer Hashing
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

//Character Hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string" << endl;
    cin >> s;

    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a'] += 1;
    }

    cout << "Enter the Queries" << endl;
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        cout << "Number of times it appears" << endl;
        cout << hash[ch - 'a'] << endl;
    }
    return 0;
}

//Map Hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    map<long,long> mpp;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]] += 1;
    }

    //iterate in the map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    cout << "Enter the queries" << endl;
    int q;
    cin >> q;
    while(q--){
        cout << "Enter the number" << endl;
        int number;
        cin >> number;
        cout << "Number of time it appears" << endl;
        cout << mpp[number] << endl;
    }
}
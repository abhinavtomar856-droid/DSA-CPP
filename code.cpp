#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {45,3,46,74,1};
    int mini = *min_element(a,a+5);
    int max = *max_element(a,a+5);

    vector<int> vec = {45,5,23,1,78};
    sort(vec.begin(),vec.end()+1);

    for(int i = 0;i<vec.size();i++){
        cout << vec[i] << endl;
    };

    cout << "Minium element is: " << mini << endl;
    cout << "Maxium element is: " << max << endl;
    cout << "Abhinav Tomar" << endl;
    cout << "Virat kohli" << endl;
    cout << "Ab de villers" << endl;
    cout << "Rohit Sharma" << endl;
    cout << "Sachin Tendulkar" << endl;
    cout << "Chris Gayle" << endl;
    cout << "Hello world" << endl;

    int num = -321;
    while(num < 0){
        int last_dig = num%10;
        cout << "Last digit is :" << last_dig << endl;
        num = num/10;
    }
    return 0;
}
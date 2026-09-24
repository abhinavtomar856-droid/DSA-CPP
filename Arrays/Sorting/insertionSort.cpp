#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr,int n){
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        };
    };
};


int main() {
    vector <int> arr = {13,46,20,52,24,9};
    int n = arr.size();
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &arr,int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    vector<int> arr = {13,46,20,52,24,9};
    int n = arr.size();
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
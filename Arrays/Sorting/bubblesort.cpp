#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr,int n) {
    for(int i=n-1;i>=0;i--){
        bool swap = false;
        for(int j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = true;
            };
        };
        if(swap == false){
            break;
        }
    };
}

int main() {
    vector<int> arr = {13,46,20,52,24,9};
    int n = arr.size();
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
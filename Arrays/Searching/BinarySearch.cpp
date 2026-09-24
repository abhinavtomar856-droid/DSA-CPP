#include <iostream>
using namespace std;

int BinarySearch(int arr[],int target,int start,int end){
    while(start <=end){
        int mid = start + (end-start)/2;
        if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int arr[7] = {-1,0,3,4,5,9,12};
    int target = 11;
    int start = 0;
    int end = 6;
    cout << BinarySearch(arr,target,start,end) << endl;
    return 0;
}
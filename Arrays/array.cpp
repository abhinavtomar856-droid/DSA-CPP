#include <iostream>
using namespace std;

//Traverse an array
int main() {
    int arr[5] = {10,20,30,40,50};
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    };
    return 0;
}

//Insert an element at index
int main() {
    int arr[5] = {1,2,3,4,5};
    arr[0] = 10;

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    };
}

//Insertion an element in an array
int main() {
    int arr[6] = {10,20,30,40,50};
    int n = 5;
    
    int index = 2;
    int value = 25;
    //Right Shift
    for(int i=n;i>index;i--){
        arr[i] = arr[i-1];
    };

    arr[index] = value;
    n++;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//Deletion an element in an array
int main() {
    int arr[6] = {10,20,30,40,50};
    int n = 5;
    
    int index = 2;
    //Left Shift
    for(int i=index;i<=n-1;i++){
        arr[i] = arr[i+1];
    };

    n--; 
    
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    };
}

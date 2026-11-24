#include <iostream>
using namespace std;

//Creating Max-Heap
class maxHeap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    //Time complexity = O(Log N)
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    };

    //Time complexity = O(Log N)
    void deleteFromHeap(){
        if(size == 0){
            cout << "Heap is Empty" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftIndex = 2 * i ;//Array have 1 based Indexing.
            int rightIndex = 2* i + 1;//Array have 1 based Indexing.

            if(leftIndex < size && arr[leftIndex] > arr[i]){
                swap(arr[leftIndex],arr[i]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[rightIndex] > arr[i]){
                swap(arr[leftIndex],arr[i]);
                i = rightIndex;
            }else{
                return;
            }
        }
    }
    
    void print(){
        for(int i=1;i<=size;i++){
            cout << arr[i] << endl;
        }
    }
};


int main() {
    maxHeap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout << "Before Deletion : " << endl;
    h.print();
    h.deleteFromHeap();
    cout << "After Deletion : " << endl;
    h.print();
    return 0;
}

#include <iostream>
using namespace std;

class minHeap {
public:
    int arr[100];
    int size;

    MinHeap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] > arr[index]) {      // sirf ye line ulti hui
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void deleteFromHeap() {
        if (size == 0) {
            cout << "Heap is Empty" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i <= size) {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            int smallest = i;

            if (leftIndex <= size && arr[leftIndex] < arr[smallest]) {
                smallest = leftIndex;
            }
            if (rightIndex <= size && arr[rightIndex] < arr[smallest]) {
                smallest = rightIndex;
            }

            if (smallest != i) {
                swap(arr[i], arr[smallest]);
                i = smallest;
            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    minHeap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout << "Before Deletion : ";
    h.print();
    h.deleteFromHeap();
    cout << "After Deletion : ";
    h.print();
    return 0;
}
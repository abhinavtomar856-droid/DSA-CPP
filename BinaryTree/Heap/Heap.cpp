#include <iostream>
using namespace std;

//Creating Max-Heap
class maxHeap{
    public:
    int arr[100];
    int size;

    maxHeap(){
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
    //Delete Root node.
    void deleteFromHeap(){
        if(size == 0){
            cout << "Heap is Empty" << endl;
            return;
        }

        //Put last element into first index.
        arr[1] = arr[size];

        //remove last element.
        size--;

        //take root node to its correct postion.
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

    void heapify(int arr[],int n,int i){
            int largest = i;
            int left = 2*i ;
            int right = 2*i + 1;

            if(left <= n && arr[largest] < arr[left]){
                largest = left; 
            }
            if(right <= n && arr[largest] < arr[right]){
                largest = right;
            }
            if(largest != i){
                swap(arr[largest],arr[i]);
                heapify(arr,n,largest);
            }
        };

    void heapSort(int arr[],int n){
        int size = n;

        while(size>1){
            //Step-1 swap
            swap(arr[size],arr[1]);
            size--;
            //Step-2
            heapify(arr,size,1);
        }
    }  


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

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    //Time complexity = O(N).
    for(int i=1;i<=5/2;i++){
        heapify(arr,n,i);
    }

    cout << "Before Sorting:" << endl;
    for(int i=1;i<=n;i++){
        cout << arr[i] << endl;
    }
    heapSort(arr,n);

    cout << "After Sorting:" << endl;
    for(int i=1;i<=n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}

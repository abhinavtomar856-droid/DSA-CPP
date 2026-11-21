#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize;
    int capacity;
    int f;
    int r;

public:
    CircularQueue(int size){
        capacity = size;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }  
    
    void push(int val){
        if(currSize == capacity){
            cout << "Circular Queue is Full" << endl;
            return;
        }
        r = (r + 1)%capacity;
        arr[r] = val;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout << "Circular Queue is Empty" << endl;
            return;
        }

        f = (f + 1)%capacity;
        currSize--;
    }
    
    int front(){
        return arr[f];
    }

    bool empty(){
        if(currSize == 0){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    while(!cq.empty()){
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;

    return 0;
};
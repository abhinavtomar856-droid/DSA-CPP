#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize;
    int capacity;
    int front;
    int rear;

public:
    CircularQueue(int size){
        capacity = size;
        arr = new int[capacity];
        
        front = 0;
        rear = -1;
    }  
    
    void push(int val){
        if(currSize == capacity){
            cout << "Circular Queue is Full" << endl;
        }
        rear = (rear + 1)%capacity
        arr[rear] = val;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout << "Circular Queue is Empty" << endl;
            return;
        }

        front = (front + 1)%capacity;
        currSize--;
    }
    
    int front(){
        return arr[front];
    }

    bool empty(){
        if(currSize == 0){
            cout << "Circular Queue is Empty" << endl;
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    CircularQueue cq;
    
    return 0;
};
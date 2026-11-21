#include<iostream>
using namespace std;

// Implement a queue using an array.
class Queue{
    int* arr;
    int capacity;
    int currSize;
    int f;
    int r;

public:
    Queue(int size){
        capacity = size;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int val){
        if(r == capacity - 1){
            cout << "Queue is Full" << endl;
            return;
        }
        arr[r++] = val;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout << "Queue is Empty" << endl;
            return;
        }
        f++;
        currSize--;
    }

    int front(){
        if(empty()){
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty(){
        return currSize == 0;
    }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;   // 10
    q.pop();
    cout << q.front() << endl;   // 20

    return 0;
}

// //Impelement a Queue using a Linked List from Scarch(without STL).
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


class Queue{
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = NULL;
    }

    //Insert data at the tail.
    void push(int val){ //O(1).
        Node* newNode = new Node(val);
        if(isEmpty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    };

    //Delete at Head.
    void pop(){//O(1).
        if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    };

    int front(){ //O(1).
        if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return head->data;
    };

    bool empty(){
        if(head == NULL){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

//Implement a queue using STL.
int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
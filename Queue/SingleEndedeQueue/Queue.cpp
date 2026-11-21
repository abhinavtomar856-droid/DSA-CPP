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

//Impelement a Queue using a Linked List from Scarch(without STL).
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
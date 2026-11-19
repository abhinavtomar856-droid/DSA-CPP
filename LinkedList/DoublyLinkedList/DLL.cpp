#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    Node* head;
    Node* tail;

public:
    DoublyLinkedList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        if(head == NULL){
            cout << "Doubly linked list is empty" << endl;
        }
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = tail;
        if(head == NULL){
            cout << "Linked list is empty" << endl;
            return;
        }
        else{
            tail = tail->prev;
            if(temp!=NULL){
                tail->next = NULL;
            }
            temp->prev = NULL;
        }
        delete temp;
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList ll; 
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.print();
    ll.pop_back();
    ll.print();

    return 0;
}
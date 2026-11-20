#include <bits/stdc++.h>
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

class circularLinkedList{
    Node* head;
    Node* tail;

public:
    circularLinkedList(){
        head = tail = NULL;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = newNode;
        }
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = newNode;
        } 
        else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead(){
        Node* temp = head;
        if(head == NULL){
            cout << "Circular Linked List is empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
        }
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

    void deleteAtTail(){
        if(head == NULL){
            cout << "Circular Linked List is empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        
        Node* prev = head;
        Node* temp = tail;
        while(prev->next != tail){
            prev = prev->next;
        }
        tail = prev;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

    void print(){
        if(head == NULL){
            cout << "Empty Circular Linked List" << endl;
            return;
        }
        cout << "Circular Linked List" << endl;

        cout << head->data << "->";
        Node* temp = head;
        temp = temp->next;

        while(temp!= head){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};

int main() {
    circularLinkedList cll;
    cll.insertAtTail(1);
    cll.insertAtTail(2);
    cll.insertAtTail(3);
    cll.insertAtTail(4);
    cll.print(); 
    cll.deleteAtTail();
    cll.print();
    return 0;
}
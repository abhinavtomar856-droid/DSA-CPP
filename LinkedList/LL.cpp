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

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);//Dynamic object
        //Linked list empty
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << "  "<< endl;
    }
};

int main() {
    List LL;
    LL.push_front(1);
    LL.push_front(2);
    LL.push_front(3);

    LL.printLL();
    return 0;
}
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
}

class circularLinkedList{
    Node* head;
    Node* tail;

public:
    circularLinkedList(){
        head = tail = NULL;
    }
}



int main() {
    circularLinkedList cll;
    return 0;
}
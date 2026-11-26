#include <bits/stdc++.h>
using namespace std;

class Node{
    int data;
    int height;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        height = 1;
        left = right = NULL;
    }
}

int height(Node* root){
    if(root == NULL){
        return 0
    }
    return root->height;
}

Node* insert(Node* root,int val){
    
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left,val);
    }else if{
        root->right = insert(root->right,val);
    }else{
        return root;
    }

    //Update height of a AVL tree.
    root->height = 1 + max((getHeight(root->left) + getHeight(root->right)));
}

int main() {
    Node* root = NULL;
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,50);
    root = insert(root,70);
    root = insert(root,5);
    root = insert(root,100);
    root = insert(root,95);
    return 0;
}
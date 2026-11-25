#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right,val);
    }
    return root;
};

Node* buildBST(vector<int> arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root,val);
    }
    return root;
};

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
};

//Time complexity = O(Log N) (Balanced BST Case)/ Average Case
//Best Case = O(1)
//Worst Case ma = O(N) Skewed Binary Tree.
bool search(Node* root,int val){
    if(root == NULL){
        return false;
    }

    if(root->data == val){
        cout << "Value Present in the node" << endl;
        return true;
    }

    if(val < root->data){
        return search(root->left,val);
    }else{
        return search(root->right,val);
    }
}

Node* getInOrderSuccessor(Node* root){
    while(root->left != NULL && root != NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root,int val){
    if(root == NULL){
        return NULL;
    }

    if(val < root->data){
        root->left = delNode(root->left,val);
    }else if(val > root->data){
        root->right = delNode(root->right,val);
    }else{//root->data == val
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }else{//Node has 2 children.
            Node* IS = getInOrderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right,IS->data);
        }
    }
    return root;
}

int main(){
    vector<int> arr = {3,2,1,5,6,4};
    Node* root = buildBST(arr);

    cout << "Before BST: " << endl;
    inorder(root);
    cout << endl;

    root = delNode(root, 2);

    cout << "After BST: "<< endl;
    inorder(root);
    cout << endl;
    return 0;
}
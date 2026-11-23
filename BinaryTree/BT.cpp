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

static int index = -1;
Node* buildTree(vector<int> preorderSequence){
    index++;
    if(preorderSequence[index] == -1){
        return NULL;
    }

    Node* root = new Node(preorderSequence[index]);
    root->left = buildTree(preorderSequence);//Left Sub Tree
    root->right = buildTree(preorderSequence);//Right Sub Tree
    return root;
};

int main(){
    vector<int> preorderSequence = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorderSequence);
    cout << root->data << endl;
    return 0;
}
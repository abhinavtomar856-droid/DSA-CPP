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

//Time complexity = O(N)
//Space complexity = O(1)
int index = -1;
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


//PreOrder Traversal
//Time complexity = O(N).
//Space complexity = O(1).
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//inOrder Traversal
//Time complexity = O(N).
//Space complexity = O(1).
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
};

//postOrder Traversal
//Time complexity = O(N).
//Space complexity = O(1).
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
};

//LevelOrder Traversal
//Time complexity = O(N).
//Space complexity = O(1).
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout << curr->data << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
};

int main(){
    vector<int> preorderSequence = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorderSequence);
    cout << "Traverse in the Binary Tree using preorder Travesal" << endl;
    preOrder(root);
    cout << endl;

    cout << "Traverse in the Binary Tree using inorder Travesal" << endl;
    inOrder(root);
    cout << endl;

    cout << "Traverse in the Binary Tree using postorder Travesal" << endl;
    postOrder(root);
    cout << endl;

    cout << "Traverse in the Binary Tree using Levelorder Travesal" << endl;
    levelOrder(root);
    return 0;
}
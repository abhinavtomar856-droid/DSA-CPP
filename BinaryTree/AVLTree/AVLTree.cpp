#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    int height;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        height = 1;
        left = right = NULL;
    }
};

int getheight(Node* root){
    if(root == NULL){
        return 0;
    }
    return root->height;
};

int getBalance(Node* root){
    return getheight(root->left) - getheight(root->right);
};

Node* rightRotation(Node* root){
    Node* child = root->left;
    Node* childRight = child->right;
    child->right = root;
    root->left = childRight;

    //Update height of child and root or parent node.
    root->height = 1 + max(getheight(root->left),getheight(root->right));
    child->height = 1 + max(getheight(child->left),getheight(child->right));

    return child;
};

Node* leftRotation(Node* root){
    Node* child = root->right;
    Node* childleft = child->left;
    child->left = root;
    root->right = childleft;

    //Update height of child and root or parent node.
    root->height = 1 + max(getheight(root->left),getheight(root->right));
    child->height = 1 + max(getheight(child->left),getheight(child->right));

    return child;
};

//Time Complexity = O(log N)
Node* insert(Node* root,int val){

    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left,val);
    }else if(val > root->data){
        root->right = insert(root->right,val);
    }else{
        return root;
    }

    //Update height of a AVL tree.
    root->height = 1 + max(getheight(root->left) , getheight(root->right));

    //Balancing
    int bf = getBalance(root);

    //Left Left Rotation case.
    if(bf > 1 && val < root->left->data){
        return rightRotation(root);
    }
    //Left Right rotation case.
    else if(bf > 1 && val> root->left->data){
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    //Right Left rotation case.
    else if(bf <-1 && val < root->right->data){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    //Right Right rotation case.
    else if(bf <-1 && val>root->right->data){
        return leftRotation(root);
    }
    else{
        return root;
    }

};

//Time Complexity = O(log N)
bool search(Node* root,int val){
    if(root == NULL){
        return false;
    }

    if(root->data == val){
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

//Time complexity = O(LogN)
Node* deleteNode(Node* root,int val){
    if(root == NULL){
        return NULL;
    }

    //Searching for a delete Node.
    if(val < root->data){
        root->left = deleteNode(root->left,val);
    }else if(val > root->data){
        root->right = deleteNode(root->right,val);
    }else{
        //Leaf Node.
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //Single Child case.
        else if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //Node has 2 children.
        else{
            Node* IS = getInOrderSuccessor(root->right);
            root->data = IS->data;
            root->right = deleteNode(root->right,IS->data);
        }
    }
    
    //Update Height
    root->height = 1 + max(getheight(root->left),getheight(root->right));
    int bf = getBalance(root);

    if(bf > 1){
        //Left Left Rotation Case
        if(getBalance(root->left) >=0){
            return rightRotation(root);
        }
        //Left Right Rotation Case
        else{
            root->left = leftRotation(root->left);
            return rightRotation(root);
        }
    }
    if(bf <-1){
        //Right Rotation Case.
        if(getBalance(root->right) >= 0){
            return leftRotation(root);
        }
        //Right Left Rotation Case
        else{
            root->right = rightRotation(root->right);
            return leftRotation(root->left);
        }
    }
    return root;
};


void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << endl;
    inOrderTraversal(root->right);
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

    // inOrderTraversal(root);
    // cout << search(root,95) << endl;

    cout << "Before\n";
    inOrderTraversal(root);
    root = deleteNode(root,30);
    cout << "After\n";
    inOrderTraversal(root);
    return 0;
}
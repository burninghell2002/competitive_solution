//
//  main.cpp
//  BST
//
//  Created by Bharat on 19/07/21.
//

#include<iostream>
#include<vector>
#include<cmath>
#include<deque>

#include<stack>

using namespace std;


class Node{
public:
    int data;
    Node *left;
    Node* right;
    
    Node(int x){
        data =x;
        left = NULL;
        right = NULL;
    }
};

Node* constructBst(vector<int>arr,int n,int *pos,int min,int max){
    
    if(*pos >= n){
        return NULL;
    }
    
    Node* new_node = NULL;
    if(arr[*pos] > min && arr[*pos] < max){
        new_node = new Node(arr[*pos]);
        *pos = *pos +1;
        
        if(*pos < n){
            new_node->left = constructBst(arr, n, pos, min, new_node->data);
        }
        if(*pos < n){
            new_node->right = constructBst(arr, n, pos, new_node->data, max);
        }
    }
    return new_node;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

Node* inorderPredecessor(Node* root,Node* curr){
    while(root->right != NULL && root->right != curr){
        root = root->right;
    }
    return root;
}

void morrisInorderTraversal(Node* root){
    
    while(root != NULL){
        if(root->left == NULL){
            cout<<root->data<<" ";
            root = root->right;
        }
        else{
            Node* predecessor =inorderPredecessor(root->left,root);
            if(predecessor->right == NULL){
                predecessor->right = root;
                root = root->left;
            }
            else{
                predecessor->right = NULL;
                cout<<root->data<<" ";
                root = root->right;
            }
        }
    }
    
}
void preOrderBST(vector<int>arr){
    int pos = 0;
    Node* root = constructBst(arr, (int)arr.size(), &pos, INT_MIN,INT_MAX);
    preOrder(root);
    cout<<endl;
    morrisInorderTraversal(root);
}

int main(int argc, const char * argv[]) {
    vector<int>A = {10, 5, 1, 7, 40, 50};
    preOrderBST(A);
    return 0;
}


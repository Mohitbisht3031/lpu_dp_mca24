#include<bits/stdc++.h>

using namespace std;

class BST{
    public:
    int val;
    BST*left;
    BST*right;
    BST(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


void in(BST*root,BST*&prev,BST*&first,BST*&second){
    if(!root)return;
    in(root->left,prev,first,second);
    if(prev && prev->val > root->val){
        if(!first){
            first = prev;
        }
        second = prev;
    }
    prev = root;
    in(root->right,prev,first,second);
    return;
}

BST*fixBST(BST*root){
    if(!root)return root;
    BST*prev = NULL;
    BST*first=NULL;
    BST* second=NULL;
    in(root,prev,first,second);
    swap(first->val,second->val);
    return root;
}

int main(){}
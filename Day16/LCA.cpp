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


BST*LCA(BST*root,int n1,int n2){
    if(!root)return root;
    if(root->val == n1 || root->val == n2)return root;
    if((root->val > n1 && root->val < n2) || (root->val < n1 && root->val > n2))return root;

    if(root->val > n1)return LCA(root->left,n1,n2);
    else return LCA(root->right,n1,n2);

    return NULL;
}

int main(){}
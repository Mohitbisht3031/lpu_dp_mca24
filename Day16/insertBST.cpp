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

BST* insert(BST*root,int &val){
    if(!root)return new BST(val);

    if(root->val >= val)root->left = insert(root->left,val);
    else root->right = insert(root->right,val);

    return root;
}
int main(){}
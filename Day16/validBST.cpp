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

bool validBST(BST*root , int ub = INT_MAX,int lb =INT_MIN){
    if(!root)return 1;

    if(!(root->val > lb && root->val < ub))return 0;

    return validBST(root->left,root->val,lb) && validBST(root->right,ub,root->val);
}

int main(){}
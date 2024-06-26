#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

int dfs(BT*root){
    if(!root)return 0;
    int ls = dfs(root->left);
    int rs = dfs(root->right);
    int v = root->val;
    root->val = ls+rs;
    return root->val+v;
}

BT* sumOfChild(BT*root){
    if(!root)return root;
    dfs(root);
    return root;
}

int main(){}
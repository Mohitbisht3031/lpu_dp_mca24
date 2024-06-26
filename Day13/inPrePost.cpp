#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

// DLR
void pre(BT*root){
    if(!root)return;

    cout<<root->val<<endl;
    pre(root->left);
    pre(root->right);
    return;
}
// LRD
void Post(BT*root){
    if(!root)return;
    Post(root->left);
    Post(root->right);
    cout<<root->val<<endl;
}

// LDR
void in(BT*root){
    if(!root)return;
    in(root->left);
    cout<<root->val<<endl;
    in(root->right);
}

int main(){}
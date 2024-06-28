#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

BT* LCA(BT*root,int n1,int n2){
    if(!root)return root;
    
    if(root->val == n1 || root->val == n2)return root;

    BT*ls = LCA(root->left,n1,n2);
    BT*rs = LCA(root->right,n1,n2);

    if(!ls && !rs)return root;
    else if(!rs && ls)return ls;
    else if(!ls && rs)return rs;

    return NULL;
}

int main(){}
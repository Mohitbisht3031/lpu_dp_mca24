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

void inorder(BST*root,vector<int>&v){
    if(!root)return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}

int kTHsmallest(BST*root,int&k){
    if(!root)return INT_MAX;
    vector<int>ans;
    inorder(root,ans);
    return ans[k-1];
}

// without any extra space
int kTHsmallest(BST*root,int&k){
    if(!root)return INT_MAX;

    int ans = kTHsmallest(root->left,k);
    if(ans != INT_MAX)return ans;
    k--;
    if(k == 0)return root->val;
    return kTHsmallest(root->right,k);
}

int main(){}
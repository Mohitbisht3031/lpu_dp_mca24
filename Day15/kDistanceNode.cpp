#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

void depth(BT*root,int k,vector<int>&v){
    if(!root)return ;
    if(k == 0){v.push_back(root->val);
        return;
    }
    depth(root->left,k-1,v);
    depth(root->right,k-1,v);
}

int dfs(BT*root,int&t,int&k,vector<int>&v){
    if(!root)return -1;

    if(root->val == t)return 0;
    int ld = dfs(root->left,t,k,v);
    if(ld != -1){
        if(ld+1 == k){
            v.push_back(root->val);
        }else{
            depth(root->right,k-ld-2,v);
        }
        return ld+1;
    }
    int rd = dfs(root->right,t,k,v);
    if(rd != -1){
        if(rd+1 == k){
            v.push_back(root->val);
        }else{
            depth(root->left,k-rd-2,v);
        }
        return 1+rd;
    }

    return -1;
}

vector<int> kDistance(BT*root,int t,int k){
    vector<int>v;
    if(!root)return v;
    dfs(root,t,k,v);
    return v;
}

int main(){}
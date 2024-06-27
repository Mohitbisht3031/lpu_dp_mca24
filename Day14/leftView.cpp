#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

void dfs(BT*root,vector<int>&ans,int h){
    if(!root)return;
    if(h > ans.size()){
        ans.push_back(h);
    }
    dfs(root->left,ans,h+1);
    dfs(root->right,ans,h+1);
    return;
}

vector<int> leftView(BT*root){
    vector<int>ans;
    if(!root)return ans;
    dfs(root,ans,1);
    return ans;
}

int main(){}
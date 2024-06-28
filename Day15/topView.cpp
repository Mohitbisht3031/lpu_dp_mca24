#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

void dfs(BT*root,unordered_map<int,int>&mp,vector<int>&ans,int f){
    if(!root)return ;
    if(mp.count(f) == 0){
        ans.push_back(root->val);
    }
    mp[f]++;
    dfs(root->left,mp,ans,f-1);
    dfs(root->right,mp,ans,f+1);
    return;
}

vector<int> topView(BT*root){
    if(!root)return {};
    vector<int>ans;
    unordered_map<int,int>mp;
    dfs(root,mp,ans,0);
    return ans;
}

int main(){}
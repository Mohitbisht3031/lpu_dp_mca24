#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

int dfs(BT*root,int&ans){
    if(!root)return 0;
    int ls = dfs(root->left,ans);
    int rs = dfs(root->right,ans);

    int cs = ls+rs+root->val;
    ans = max(ans,cs);

    return max(ls,rs)+root->val;

}

int maxiPath(BT*root){
    if(!root)return 0;
    int ans = INT_MIN;
    dfs(root,ans);
    return ans;
}

int main(){}
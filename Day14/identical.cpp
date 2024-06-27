#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

bool dfs(BT*r1,BT*r2){
    if(!r1 || !r2){
        return r1 == r2;
    }

    if(r1->val != r2->val)return 0;
    return (dfs(r1->left,r2->left) && dfs(r1->right,r2->right));
}

bool identical(BT*root){
    if(!root)return 1;
    return dfs(root->left,root->right);
}

int main(){}
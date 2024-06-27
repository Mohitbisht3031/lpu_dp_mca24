#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

int maxPath(BT*root){
    if(!root)return 0;
    int ls = maxPath(root->left);
    int rs = maxPath(root->right);

    return max(rs,ls)+root->val;
}

int main(){}
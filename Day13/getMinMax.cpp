#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

pair<int,int> getMinMax(BT*root){
    if(!root)return {INT_MIN,INT_MAX};
    if(!root->left && !root->right)return {root->val,root->val};

    pair<int,int>p1 = getMinMax(root->left);
    pair<int,int>p2 = getMinMax(root->right);

    int maxi = max({root->val,p1.first,p2.first});
    int mini = min({root->val,p1.second,p2.second});

    return {maxi,mini};
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

pair<int,int> largestSecondLargest(BT*root){
    if(!root) return {INT_MIN,INT_MIN};
    if(!root->left && !root->right){
        return {root->val,root->val};
    }

    pair<int,int>p1 = largestSecondLargest(root->left);
    pair<int,int>p2 = largestSecondLargest(root->right);

    int maxi = max({p1.first,p2.first,root->val});
    int smaxi = 0 ;
    if(maxi == p1.first){
        smaxi = max({p2.first,root->val,p1.second});
    }else if (maxi == p2.first){
        smaxi = max({p1.first,p2.second,root->val});
    }else{
        smaxi = max({p1.first,p2.first});
    }

    return {maxi,smaxi};
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};


vector<vector<int>>zigzag(BT*root){
    if(!root)return {};
    stack<BT*>s1;
    stack<BT*>s2;
    vector<vector<int>>ans;
    vector<int>v;
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            BT*t = s1.top();
            s1.pop();
            v.push_back(t->val);
            if(t->left)s2.push(t->left);
            if(t->right)s2.push(t->right);
        }
        if(v.size())ans.push_back(v);
        v.clear();
        while(!s2.empty()){
            BT*t = s2.top();
            s2.pop();
            v.push_back(t->val);
            if(t->right)s1.push(t->right);
            if(t->left)s1.push(t->left);
        }
        if(v.size())ans.push_back(v);
        v.clear();
    }

    return ans;
}

int main(){}
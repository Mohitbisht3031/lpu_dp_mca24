#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};

void level(BT*root){
    if(!root)return ;
    queue<BT*>q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            BT*n = q.front();
            q.pop();
            cout<<n->val<<" ";
            if(n->left)q.push(n->left);
            if(n->right)q.push(n->right);
        }
        cout<<endl;
    }
    return;
}

int main(){}
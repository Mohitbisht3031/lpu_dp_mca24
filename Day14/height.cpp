#include<bits/stdc++.h>

using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
};


int height(BT*root){
    if(!root)return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

int height(BT*root){
    if(!root)return 0;
    int c = 0;
    queue<BT*>q;
    q.push(root);

    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            BT*f = q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        c++;
    }
    return c;
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

class LL{
    public:
    int val;
    LL*next;
    LL(int v){
        this->val = v;
    }
};

LL* insert(LL*h,int i,int v){
    if(!h)return h;
    if(i == 0){
        LL*nn = new LL(v);
        nn->next = h;
        return nn;
    }
    h->next = insert(h->next,i-1,v);
    return h;
}

int main(){}
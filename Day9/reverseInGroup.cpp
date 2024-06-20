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

int len(LL*h){
    if(!h)return 0;
    return len(h->next)+1;
}

LL* rec(LL*h,int k ,int l){
    if(l < k)return h;
    LL*t =h;
    LL*prev = NULL;
    int c = k;
    LL*n = NULL;
    while(c--){
        n = t->next;
        t->next = prev;
        prev = t;
        t = n;
    }
    h->next = rec(n,k,l-k);
    return prev;
}

LL* reverseInGroup(LL*h,int k){
    if(!h || !h->next)return h;
    int l = len(h);
    if(l < k)return h;
    return rec(h,k,l);
}

int main(){}
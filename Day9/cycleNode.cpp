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

LL*node(LL*h){
    if(!h || !h->next)return NULL;
    LL*s = h;
    LL*f = h->next;
    LL*ans = NULL;
    while(f){
        if(!f->next)break;
        if(s == f)break;
        s = s->next;
        f = f->next->next;
    }
    if(s == f){
        s = h;
        while(s != f){
            s = s->next;
            f = f->next;
        }
        ans = s;
    }
    return ans;
}

int main(){}
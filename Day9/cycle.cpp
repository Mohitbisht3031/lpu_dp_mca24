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

bool cycle(LL*h){
    if(!h || !h->next)return 0;
    unordered_map<LL*,int>mp;
    LL*t = h;
    while(t){
        mp[t]++;
        if(mp.count(t->next))return 1;
        t = t->next;
    }
    return 0;
}

bool cycle(LL*h){
    if(!h || !h->next)return 0;
    LL*s = h;
    LL*f = h->next;
    while(f){
        if(!f->next)break;
        if(f == s)return 1;
        s = s->next;
        f = f->next->next;
    }
    return 0;
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

class LL{
    public:
    int val;
    LL*next;
};

LL* middle(LL*h){
    if(!h)return h;
    LL*s = h;
    LL*f = s->next;
    while(f){
        if(!f->next)return s;
        s = s->next;
        f = f->next->next;
    }
    return s;
}

int main(){}
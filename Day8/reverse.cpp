#include<bits/stdc++.h>

using namespace std;

class LL{
    public:
    int val;
    LL*next;
};
// iteration
LL* reverse(LL*h){
    if(!h || !h->next)return h;
    LL*prev = NULL;
    LL*cur = h;
    LL*n = h->next;
    while(n){
        cur->next = prev;
        prev = cur;
        cur = n;
        n = n->next;
    }

    return cur;
}

LL* reverse(LL*h){
    if(!h || !h->next)return h;
    LL*nh = reverse(h->next);

    LL*t = h->next;
    h->next = NULL;
    t->next = h;

    return nh;
}

int main(){}
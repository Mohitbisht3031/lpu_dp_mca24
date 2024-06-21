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

LL*find(LL*h1,LL*h2){
    LL*t1 = h1;
    LL*t2 = h2;

    while(t1 && t1 != t2){
        t1 = t1->next;
        t2=t2->next;
    }

    return t1;
}

LL* intersection(LL*h1,LL*h2){
    int l1 = len(h1);
    int l2 = len(h2);

    if(l1 == l2)return find(h1,h2);

    if(l1 > l2){
        LL*t = h1;
        l1-=l2;
        while(l1-- > 0)t = t->next;
        return find(t,h2);
    }

    l2-=l1;
    LL*t = h2;
    while(l2-- > 0)t = t->next;

    return find(h1,t);

}

int main(){}
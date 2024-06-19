#include<bits/stdc++.h>

using namespace std;

class LL{
    public:
    int val;
    LL*next;
};

// recursive
int findLen(LL*h){
    if(!h)return 0;
    int l = findLen(h->next);

    return l+1;
}

// iterative 
int findLen(LL*h){
    if(!h)return 0;
    LL*t = h;
    int c = 0;
    while(t){
        t = t->next;
        c++;
    }
    return c;
}

int main(){}
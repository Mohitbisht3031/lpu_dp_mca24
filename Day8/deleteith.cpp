#include<bits/stdc++.h>

using namespace std;

class LL{
    public:
    int val;
    LL*next;
};

//recursive
/*
1. base case
2. recursive call
3. my part / small cal.
*/

LL* deleteith(LL*h,int i){
    if(!h)return h;
    if(i == 0){
        return h->next;
    }
    h->next = deleteith(h->next,i-1);
    return h;
}

//iterative approach
LL* deletiTh(LL*h,int i){
    if(!h)return h;
    LL*t = h;
    while(t){
        if(i == 1){
            t->next = t->next->next;
            break;
        }
        i--;
        t = t->next;
    }
    return h;
}

int main(){}
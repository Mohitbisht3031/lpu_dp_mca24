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

LL* intersection(LL*h1 , LL*h2){
    unordered_map<LL*,int>mp;
    LL*t = h1;
    while(t){
        mp[t]++;
        t = t->next;
    }
    t = h2;
    while(t){
        if(mp.count(t))return t;
        t = t->next;
    }
    return NULL;
}

int main(){}
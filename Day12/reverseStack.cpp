#include<bits/stdc++.h>

using namespace std;

void insert(stack<int>&stk,int t){
    if(stk.size() == 0){
        stk.push(t);
        return;
    }
    int t = stk.top();
    stk.pop();
    insert(stk,t);
    stk.push(t);
}

void reverse(stack<int>&stk){
    if(stk.size() == 0)return;

    int t = stk.top();
    stk.pop();

    reverse(stk);
    insert(stk,t);
    return;
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

vector<int> stockSpan(vector<int>&p){
    vector<int>v(p.size(),1);
    stack<int>stk;
    stk.push(0);
    for(int i = 1;i<p.size();i++){
        while(!stk.empty() && p[stk.top()] < p[i])stk.pop();
        v[i] = (stk.empty() ? i+1 : i - stk.top());
        stk.push(i);
    }
    return v;
}

int main(){}
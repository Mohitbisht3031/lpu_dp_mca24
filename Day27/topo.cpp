#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&g,int src,vector<int>&vis,list<int>&l){
    vis[src] = 1;
    for(int nbr : g[src]){
        if(!vis[nbr]){
            dfs(g,nbr,vis,l);
        }
    }
    l.push_front(src);
    return;
}

list<int> topo(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    list<int>l;
    for(int i = 0 ;i<g.size();i++){
        if(!vis[i]){
            dfs(g,i,vis,l);
        }
    }

    return l;
}
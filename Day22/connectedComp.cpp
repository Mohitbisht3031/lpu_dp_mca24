#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&g,int src,vector<int>&vis){
    vis[src] =1;
    for(int nbr : g[src]){
        if(!vis[nbr])dfs(g,nbr,vis);
    }
    return ;
}

int connectedComp(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    int c = 0;
    for(int i = 1;i<=g.size();i++){
        if(!vis[i]){
            dfs(g,i,vis);
            c++;
        }
    }

    return c;
}

int main(){}
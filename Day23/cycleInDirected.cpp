#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int src,vector<int>&vis,vector<int>&path){
    vis[src] = 1;
    path[src] = 1;
    for(int nbr : g[src]){
        if(vis[nbr] && path[nbr])return 1;
        else if(!vis[nbr]){
            if(dfs(g,nbr,vis,path))return 1;
        }
    }

    path[src] = 0;

    return 0;
}

bool haveCycle(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    vector<int>path(g.size(),0);
    for(int i = 0;i<g.size();i++){
        if(!vis[i]){
            if(dfs(g,i,vis,path))return 1;
        }
    }

    return 0;
}

int main(){}
#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int src,vector<int>&vis,vector<int>&color,int c){
    vis[src] = 1;
    color[src] = c;

    for(int nbr : g[src]){
        if(!vis[nbr]){
            if(!dfs(g,nbr,vis,color,0-c))return 0;
        }else {
            if(color[nbr] != (0-c))return 0;
        }
    }

    return 1;
}

bool bipartition(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    vector<int>color(g.size(),0);
    for(int i = 0;i<vis.size();i++){
        if(!vis[i]){
            if(!dfs(g,i,vis,color,1))return 0;
        }
    }

    return 1;
}

int main(){}
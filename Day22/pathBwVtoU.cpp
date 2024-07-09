#include<bits/stdc++.h>
using namespace std;


// dfs
bool dfs(vector<vector<int>>&g,int v1,int v2,vector<int>&vis){
    if(v1 == v2)return 1;
    vis[v1] = 1;
    for(int nbr : g[v1]){
        if(!vis[nbr]){
            if(dfs(g,nbr,v2,vis))return 1;
        }
    }

    return 0;
}

bool hasPath(vector<vector<int>>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    return dfs(g,v1,v2,vis);
}

// bfs
bool hasPath(vector<vector<int>>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    queue<int>q;
    q.push(v1);
    vis[v1] = 1;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        if(f == v2)return 1;
        for(int nbr : g[f]){
            if(!vis[nbr]){
                vis[nbr] =1;
                q.push(nbr);
            }
        }
    }

    return 0;
}

int main(){}
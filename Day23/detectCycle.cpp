#include<bits/stdc++.h>

using namespace std;

bool check(vector<vector<int>>&g,int src,int p,vector<int>&vis){
    vis[src] = 1;
    for(int nbr : g[src]){
        if(vis[nbr] && nbr != p)return 1;
        else if(!vis[nbr])check(g,nbr,src,vis);
    }
    return 0;
}

bool haveCyce(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    for(int i = 0;i<vis.size();i++){
        if(!vis[i] && check(g,i,-1,vis))return 1;
    }

    return 0;
}

int main(){}
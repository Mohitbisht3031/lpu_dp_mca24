#include<bits/stdc++.h>
using namespace std;

bool canReach(vector<vector<int>>&g,int&n1,int&n2,vector<int>&vis){
    if(n1 == n2)return 1;
    vis[n1] = 1;
    for(int nbr : g[n1]){
        if(!vis[nbr]){
            if(canReach(g,nbr,n2,vis))return 1;
        }
    }

    return 0;
}

bool swaps(vector<int>&p,vector<int>&q,vector<pair<int,int>>&pair){
    vector<vector<int>>g(p.size()+1);
    for(auto e : pair){
        g[e.first].push_back(e.second);
        g[e.second].push_back(e.first);
    }   

    for(int i = 0;i<p.size();i++){
        if(p[i] != q[i]){
            vector<int>vis(p.size(),0);
            if(!canReach(g,p[i],q[i],vis))return 0;
        }
    }

    return 1;
}
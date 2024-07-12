#include<bits/stdc++.h>

using namespace std;

bool haveCycle(vector<vector<int>>&g,int src,vector<int>&vis,vector<int>&path){
    vis[src] = 1;
    path[src] = 1;
    for(int nbr : g[src]){
        if(!vis[nbr]){
            if(haveCycle(g,nbr,vis,path)){
                path[src] = 0;
                return 1;}
        }else {
            if(path[nbr]){
                path[nbr] = 0;
                return 1;
            }
        }
    }
    path[src] = 0;
    return 0;
}

bool course(int &n,vector<vector<int>>&pre){
    vector<vector<int>>g(n);
    for(vector<int> e : pre){
        g[e[1]].push_back(e[0]);
    }

    vector<int>vis(n,0);
    vector<int>path(n,0);
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            if(haveCycle(g,i,vis,path))return 0;
        }
    }

    return 1;
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

int shortestPath(vector<vector<int>>&g,int src,int des){
    vector<int>vis(g.size(),0);
    queue<pair<int,int>>q;
    q.push({src,0});
    vis[src] =1;
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        int n = f.first;
        int d = f.second;
        if(n == des)return d;
        for(int nbr : g[n]){
            if(!vis[nbr]){
                q.push({nbr,d+1});
                vis[nbr] = 1;
            }
        }
    }

    return -1;
}

int main(){}
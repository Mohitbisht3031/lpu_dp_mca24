#include<bits/stdc++.h>
using namespace std;

int prims(vector<vector<pair<int,int>>>&g){
    priority_queue<pair<int,int>>pq;
    vector<int>vis(g.size(),0);
    pq.push({0,0});
    int wt = 0;
    while(!pq.empty()){
        auto t = pq.top();
        pq.pop();
        if(vis[t.second])continue;

        vis[t.second]=1;
        wt+=t.first;
        for(auto nbr : g[t.second]){
            if(!vis[nbr.first]){
                pq.push({nbr.second,nbr.first});
            }
        }
    }

    return wt;
}

int main(){}
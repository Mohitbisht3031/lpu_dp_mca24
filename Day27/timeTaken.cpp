#include<bits/stdc++.h>
using namespace std;

int timeTaken(vector<vector<int>>&t,int n,int k){
    vector<vector<pair<int,int>>>g(n);
    for(auto e : t){
        g[e[0]].push_back({e[1],e[2]});
    }

    vector<int>dis(n+1,INT_MAX);
    dis[0] = 0;
    priority_queue<pair<int,int>>pq;
    pq.push({0,k});
    while(!pq.empty()){
        auto t = pq.top();
        pq.pop();
        for(auto nbr : g[t.second]){
            if(t.first+nbr.second < dis[nbr.first]){
                dis[nbr.first] = t.first+nbr.second;
                pq.push({t.first+nbr.second,nbr.first});
            }
        }
    }

    return *max_element(dis.begin(),dis.end());
}
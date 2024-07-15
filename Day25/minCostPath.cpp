#include<bits/stdc++.h>
using namespace std;

int minCostPath(vector<vector<pair<int,int>>>&g,int&src,int&des){
    vector<int>d(g.size(),INT_MAX);
    priority_queue<pair<int,int>>pq;
    //wt,node
    pq.push({0,src});
    vector<int>vis(g.size(),0);
    vis[src] = 1;
    while(!pq.empty()){
        auto t = pq.top();
        pq.pop();
       vis[t.second] = 1; 
        for(auto nbr : g[t.first]){
            int c = nbr.second+t.first;
            int n = nbr.first;
            if(c < d[n] && !vis[n]){
                d[n] = c;
                pq.push({d[n],n});
            }
        }
    }
    return d[des];
}

int main(){}
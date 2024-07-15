#include<bits/stdc++.h>
using namespace std;


int bellmanFord(vector<vector<int>>&edge,int&src,int&des,int&v){
    vector<int>dis(v+1,INT_MAX);
    dis[src] = 0;

    for(int i = 0 ;i<v;i++){
        for(auto e:edge){
            int u = e[0];
            int v = e[1];
            int wt = e[2];
            if(dis[u] != INT_MAX && dis[u]+wt < dis[v]){
                dis[v] = dis[u]+wt;
            }
        }
    }

    return dis[des];
}

int main(){}
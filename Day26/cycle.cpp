#include<bits/stdc++.h>
// #include<..DSU.cpp>
using namespace std;


class DSU{
    vector<int>parent;
    vector<int>rank;
    public:
    DSU(int v){
        this->parent = vector<int>(v+1,-1);
        this->rank = vector<int>(v+1,0);
    }
    int findPar(int node){
        if(parent[node] == -1)return node;
        return parent[node] = findPar(parent[node]);
    }
    void Union(int n1,int n2){
        int p1 = findPar(n1);
        int p2 = findPar(n2);

        if(rank[p1] < rank[p2]){
            parent[p1] = p2;
        }else if(rank[p2] < rank[p1]){
            parent[p2] = p1;
        }else{
            parent[p2] = p1;
            rank[p1]++;
        }
    }
};

bool haveCycle(vector<vector<int>>&g){
    vector<pair<int,int>>eg;
    for(int i = 0 ;i<g.size();i++){
        for(int nbr : g[i]){
            eg.push_back({i,nbr});
        }
    }
    DSU obj(g.size());
    for(auto e : eg){
        int src = e.first;
        int des = e.second;
        if(obj.findPar(src) == obj.findPar(des))return 1;
        obj.Union(src,des);
    }

    return 0;
}

int main(){}
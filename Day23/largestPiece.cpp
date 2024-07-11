#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&g,int i,int j,int&c){
    if(i < 0 || i >= g.size() || j <0 || j >= g[0].size() || g[i][j] == 0)return;
    g[i][j] = -1;
    c++;
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
    for(int k = 0;k<4;k++){
        int nx = i+dx[k];
        int ny = j+dy[k];
        dfs(g,nx,ny,c);
    }

    return;
}

int largestCake(vector<vector<int>>&g){
    int ans = 0;
    for(int i = 0;i<g.size();i++){
        for(int j = 0;j<g[0].size();j++){
            if(g[i][j]){
                int c = 0;
                dfs(g,i,j,c);
                ans = max(ans,c);
            }
        }
    }
}

int main(){
}
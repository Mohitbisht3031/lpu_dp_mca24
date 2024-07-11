#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int i,int j,string&w,int wi){
    if(wi >= w.size())return 1;
    if(i < 0 || i >= g.size() || j < 0 || j > g[0].size() || g[i][j] != w[wi])return 0;

    char ch = w[wi];
    g[i][j] = '0';

    int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1 , 1 ,0 ,-1 , 1 , -1, 0 , 1};

    for(int k = 0;k<8;k++){
        int nx = i+dx[k];
        int ny = j+dy[k];
        if(dfs(g,nx,ny,w,wi+1)){
            g[i][j] = ch;
            return 1;
        }
    }
    g[i][j] = ch;
    return 0;
}

bool makeWord(vector<vector<int>>&g,string&word){
    for(int i = 0;i<g.size();i++){
        for(int j = 0;j<g.size();j++){
            if(g[i][j] == word[0]){
                if(dfs(g,i,j,word,0))return 1;
            }
        }
    }

    return 0;
}

int main(){}
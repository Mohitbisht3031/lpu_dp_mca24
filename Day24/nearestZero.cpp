#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> nearest(vector<vector<int>>&mat){
    vector<vector<int>>d(mat.size(),vector<int>(mat[0].size(),-1));
    queue<pair<int,int>>q;
    for(int i =0 ;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == 0){
                q.push({i,j});
            }
        }
    }

    int dx[] = {0,0,-1,1};
    int dy[] = {1,-1,0,0};

    while(!q.empty()){
        pair<int,int>f = q.front();
        q.pop();
        int x = f.first;
        int y = f.second;

        for(int k = 0;k<4;k++){
            int nx = x+dx[k];
            int ny = y+dy[k];

            if(nx >= 0 && nx <= mat.size() && ny >= 0 && ny <= mat[0].size() && d[nx][ny] == -1 && mat[nx][ny] == 1){
                d[nx][ny] = d[x][y]+1;
                q.push({nx,ny});
            }
        }
    }

    return d;
}

int main(){}
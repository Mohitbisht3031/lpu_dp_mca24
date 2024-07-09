#include<bits/stdc++.h>

using namespace std;

int minTimeToRotte(vector<vector<int>>&g){
    queue<pair<int,int>>q;
    for(int i = 0;i<g.size();i++){
        for(int j = 0;j<g[0].size();j++){
            if(g[i][j]== 2){
                q.push({i,j});
            }
        }
    }

    int c = 0;
    // int ans = INT_MAX;
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            int x = f.first;
            int y = f.second;
            g[x][y] = -1;
            if(x+1 < g.size() && g[x+1][y] == 1)q.push({x+1,y});
            if(x-1 >=0 && g[x-1][y] == 1)q.push({x-1,y});
            if(y+1 < g[0].size() && g[x][y+1] == 1)q.push({x,y+1});
            if(y-1 >= 0 && g[x][y-1] == 1)q.push({x,y-1});
        }
        c++;
    }

    return c;
}

int main(){}
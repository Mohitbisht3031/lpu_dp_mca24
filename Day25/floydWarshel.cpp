#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> floydWarshel(vector<vector<int>>&g){
    for(int k = 0;k<g.size();k++){
        for(int i = 0 ;i<g.size();i++){
            for(int j = 0;j<g.size();j++){
                if(g[i][j] > g[i][k] + g[k][j]){
                    g[i][j] =  g[i][k] + g[k][j];
                }
            }
        }
    }

    return g;
}

int main(){}
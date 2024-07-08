#include<bits/stdc++.h>

using namespace std;

int subMatrix(vector<vector<int>>&mat){
    vector<vector<int>>dp(mat.size(),vector<int>(mat[0].size()));
    for(int i = 0;i<mat.size();i++){
        for(int j= 0;j<mat[0].size();j++){
            if(i == 0 || j == 0){
                if(mat[i][j] == 0)dp[i][j] = 1;
            }else {
                int x = dp[i-1][j];
                int y = dp[i][j-1];
                int z = dp[i-1][j-1];
                dp[i][j] = min({x,y,z})+1;         
            }
        }
    }
}

int main(){}
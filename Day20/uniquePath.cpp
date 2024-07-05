#include<bits/stdc++.h>

using namespace std;

int helper(vector<vector<int>>&mat,int i,int j){
    if(i > mat.size() || j >mat[0].size())return 0;
    if(i == mat.size()-1 && j == mat[0].size()-1)return 1;

    if(mat[i][j] == 1)return 0;

    int a1 = helper(mat,i+1,j);
    int a2 = helper(mat,i,j+1);

    return a1+a2;
}

int uniquePath(vector<vector<int>>&mat){
    return helper(mat,0,0);
}

// memo
int helper(vector<vector<int>>&mat,int i,int j,vector<vector<int>>&dp){
    if(i > mat.size() || j >mat[0].size())return 0;
    if(i == mat.size()-1 && j == mat[0].size()-1)return 1;

    if(dp[i][j] != -1)return dp[i][j];
    if(mat[i][j] == 1)return 0;

    int a1 = helper(mat,i+1,j,dp);
    int a2 = helper(mat,i,j+1,dp);

    return dp[i][j] = a1+a2;
}

int uniquePath(vector<vector<int>>&mat){
    vector<vector<int>>dp(mat.size(),vector<int>(mat[0].size(),-1));
    return helper(mat,0,0,dp);
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

int helper(vector<vector<int>>&mat,int i,int j){
    if( i== mat.size()-1 && j == mat[0].size()-1)return mat[i][j];
    if(i >= mat.size() || j >= mat[0].size())return INT_MAX;

    int a1 = helper(mat,i+1,j);
    int a2 = helper(mat,i,j+1);
    int a3 = helper(mat,i+1,j+1);
    
    return min({a1,a2,a3})+mat[i][j];
}

int minCostPAth(vector<vector<int>>&mat){
    return helper(mat,0,0);
}

// memoization
int helper(vector<vector<int>>&mat,int i,int j,vector<vector<int>>&dp){
    if( i== mat.size()-1 && j == mat[0].size()-1)return mat[i][j];
    if(i >= mat.size() || j >= mat[0].size())return INT_MAX;

    if(dp[i][j] != -1)return dp[i][j];

    int a1 = helper(mat,i+1,j,dp);
    int a2 = helper(mat,i,j+1,dp);
    int a3 = helper(mat,i+1,j+1,dp);
    
    return dp[i][j] = min({a1,a2,a3})+mat[i][j];
}

int minCostPAth(vector<vector<int>>&mat){
    vector<vector<int>>dp(mat.size(),vector<int>(mat[0].size(),-1));
    return helper(mat,0,0,dp);
}

int main(){}
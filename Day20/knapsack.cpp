#include<bits/stdc++.h>

using namespace std;

// 
int helper(vector<int>&v,vector<int>&w,int W,int i){
    if(i >= w.size() || W <= 0)return 0;

    int a1 = helper(v,w,W-w[i],i) + v[i];
    int a2 = helper(v,w,W,i);

    return max(a1,a2);
}

int knapsack(vector<int>&v,vector<int>&w,int&W){
    return helper(v,w,W,0);
}

// memo
vector<vector<int>>dp;
int helper(vector<int>&v,vector<int>&w,int W,int i){
    if(i >= w.size() || W <= 0)return 0;

    if(dp[i][W] != -1)return dp[i][W];

    int a1 = helper(v,w,W-w[i],i) + v[i];
    int a2 = helper(v,w,W,i);

    return dp[i][W] = max(a1,a2);
}

int knapsack(vector<int>&v,vector<int>&w,int&W){
    dp = vector<vector<int>>(w.size(),vector<int>(W+1,-1));
    return helper(v,w,W,0);
}

int main(){}
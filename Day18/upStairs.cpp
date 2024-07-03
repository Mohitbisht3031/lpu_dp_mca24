#include<bits/stdc++.h>

using namespace std;

int staircase(int n){
    if(n==0)return 0;
    if(n <= 2)return n;
    int a1 = staircase(n-1);
    int a2 = staircase(n-2);
    int a3 = staircase(n-3);

    return a1+a2+a3;
}

// memoization
int helper(int n,vector<int>&dp){
    if(n==0)return 0;
    if(n <= 2)return n;
    if(dp[n] != -1)return dp[n];
    int a1 = helper(n-1,dp);
    int a2 = helper(n-2,dp);
    int a3 = helper(n-3,dp);

    return dp[n] = a1+a2+a3;
}

int staircase(int n){
    vector<int>dp(n+1,0);
    return helper(n,dp);
}

int main(){}
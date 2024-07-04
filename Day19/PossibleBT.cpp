#include<bits/stdc++.h>

using namespace std;

// 
int possibleBalancedBT(int h){
    if(h <= 1)return h;
    long long int h1 = possibleBalancedBT(h-1);
    long long int h2 = possibleBalancedBT(h-2);

    int mod = 1e9+7;
    int ans1 = (int)((h1*h1)%mod);
    int ans2 = (int)((h1*h2*2)%mod);

    return (ans1+ans2)%mod;
}

// memo
int helper(int h,vector<int>&dp){
    
    if(h <= 1)return h;
    if(dp[h] != -1)return dp[h];
    long long int h1 = helper(h-1,dp);
    long long int h2 = helper(h-2,dp);

    int mod = 1e9+7;
    int ans1 = (int)((h1*h1)%mod);
    int ans2 = (int)((h1*h2*2)%mod);

    return dp[h] = (ans1+ans2)%mod;
}

int possibleBalancedBT(int h){
    if(h <= 1)return h;
    vector<int>dp(h+1,-1);
    return helper(h,dp);
}


int main(){}
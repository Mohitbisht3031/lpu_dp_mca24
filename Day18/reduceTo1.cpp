#include<bits/stdc++.h>

using namespace std;


int reduceToOne(int n){
    if(n <= 1)return 0;
    int a1 = 99999;
    int a2 = 9999;
    int a3 = 9999;

    a1 = 1+reduceToOne(n-1);
    if(n%2 == 0)a2 = 1+reduceToOne(n/2);
    if(n%3 == 0)a3 = 1+reduceToOne(n/3);

    return min({a1,a2,a3});
}

// memoization 
int helper(int n,vector<int>&dp){
    if( n <= 1)return 0;
    if(dp[n] != -1)return dp[n];
     int a1 = 99999;
    int a2 = 9999;
    int a3 = 9999;

    a1 = 1+reduceToOne(n-1);
    if(n%2 == 0)a2 = 1+reduceToOne(n/2);
    if(n%3 == 0)a3 = 1+reduceToOne(n/3);
    return dp[n] = min({a1,a2,a3});
}

int reduceToOne(int n){
    vector<int>dp(n+1,-1);
    return helper(n,dp);
}

// tabular
int reduceToOne(int n){
    if(n <= 1)return 0;
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4;i<=n;i++){
        int a1 = dp[i-1]+1;
        int a2 = 9999;
        int a3 = 99999;
        if(i%2 == 0)a2 = dp[i/2]+1;
        if(i%3 == 0)a3 = dp[i/3]+1;
        dp[i] = min({a1,a2,a3});
    }

    return dp[n];
}


int main(){}
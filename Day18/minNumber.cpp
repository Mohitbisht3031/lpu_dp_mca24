#include<bits/stdc++.h>

using namespace std;


int minNumbers(int n,vector<int>&dp){
    if(n <= 3)return 3;
    if(dp[n] != -1)return dp[n];
    int ans = n;
    for(int i = 1;i<=n;i++){
        int s = i*i;
        if(s > n)break;
        ans = min(ans,minNumbers(n-s,dp));
    }

    return dp[n] = ans;
}

int main(){}
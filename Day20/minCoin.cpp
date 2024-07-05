#include<bits/stdc++.h>

using namespace std;


//
int helper(vector<int>&c,int a,int i){
    if(i >= c.size() || a < 0)return 9999;
    if(a == 0)return 0;

    int a1 = helper(c,a-c[i],i)+1;
    int a2 = helper(c,a,i+1);

    return min(a1,a2);
}

int minCoin(vector<int>&c,int a){
    return helper(c,a,0);
}

// memo
vector<int>dp;
int helper(vector<int>&c,int a,int i){
    if(i >= c.size() || a < 0)return 9999;
    if(a == 0)return 0;
    if(dp[i] != -1)return dp[i];

    int a1 = helper(c,a-c[i],i)+1;
    int a2 = helper(c,a,i+1);

    return dp[i] = min(a1,a2);
}

int minCoin(vector<int>&c,int a){
    dp = vector<int>(c.size(),-1);
    return helper(c,a,0);
}

int main(){}
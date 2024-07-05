#include<bits/stdc++.h>

using namespace std;

vector<int>dp;
// 
int helper(vector<int>&h,int i){
    if(i >= h.size())return 0;
    int a1 = h[i]+helper(h,i+2);
    int a2 = helper(h,i+1);

    return max(a1,a2);
}

int maxLoot(vector<int>&h){
    return helper(h,0);
}

// memo
int helper(vector<int>&h,int i){
    if(i >= h.size())return 0;
    if(dp[i] != -1)return dp[i];
    int a1 = h[i]+helper(h,i+2);
    int a2 = helper(h,i+1);

    return dp[i] = max(a1,a2);
}

int maxLoot(vector<int>&h){
    dp = vector<int>(h.size(),-1);
    return helper(h,0);
}

int main(){}
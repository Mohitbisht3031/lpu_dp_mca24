#include<bits/stdc++.h>

using namespace std;
//
int helper(vector<int>&nums,int s,int e){
    if(s >= e || s == e-1)return 0;
    int ans = INT_MAX;
    for(int i = s+1;i<=e;i++){
        int a = helper(nums,s,i) + helper(nums,i,e) + nums[s]*nums[i]*nums[e];
        ans = min(ans,a);
    }
    return ans;
}

int MCM(vector<int>&nums){
    return helper(nums,0,nums.size()-1);
}

// memo
vector<vector<int>>dp;
int helper(vector<int>&nums,int s,int e){
    if(s >= e || s == e-1)return 0;
    if(dp[s][e] != -1)return dp[s][e];
    int ans = INT_MAX;
    for(int i = s+1;i<=e;i++){
        int a = helper(nums,s,i) + helper(nums,i,e) + nums[s]*nums[i]*nums[e];
        ans = min(ans,a);
    }
    return dp[s][e] = ans;
}

int MCM(vector<int>&nums){
    dp = vector<vector<int>>(nums.size(),vector<int>(nums.size(),-1));
    return helper(nums,0,nums.size()-1);
}


int main(){}
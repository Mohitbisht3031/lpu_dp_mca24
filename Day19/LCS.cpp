#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>dp;
int helper(string&s,string&t,int i,int j){
    if(i >= s.size() || j >= t.size())return 0;

    if(dp[i][j] != -1)return dp[i][j];

    if(s[i] == s[j]){
        return 1+helper(s,t,i+1,j+1);
    }

    int a1 = helper(s,t,i+1,j);
    int a2 = helper(s,t,i,j+1);
    int a3 = helper(s,t,i+1,j+1);

    return dp[i][j] = max({a1,a2,a3});
}

int LCS(string&s,string&t){
    dp = vector<vector<int>>(s.size()+1,vector<int>(t.size()+1,-1));
    return helper(s,t,0,0);
}

int main(){}
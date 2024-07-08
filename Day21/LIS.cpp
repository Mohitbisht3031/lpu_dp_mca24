#include<bits/stdc++.h>

using namespace std;

int helper(vector<int>&nums,int i,int prev){
    if(i >= nums.size())return 0;

    int a1 = helper(nums,i+1,prev);
    int a2 = INT_MIN;
    if(prev < nums[i]){
        a2 = helper(nums,i+1,nums[i])+1;
    }

    return max(a1,a2);
}

int LIS(vector<int>&nums){
    int maxi = *max_element(nums.begin(),nums.end());
    // dp = vector<vector<int>>(maxi+1,vector<int>(nums.size(),-1));
    return helper(nums,0,-1);
}

// 
int LIS(vector<int>&nums){
    vector<int>lis(nums.size(),1);
    int maxi = 1;
    for(int i = 1;i<nums.size();i++){
        for(int j = i-1;j>=0;j--){
            if(nums[i] > nums[j]){
                lis[i] = max(lis[j]+1,lis[i]);
                maxi = max(maxi,lis[i]);
            }
        }
    }
    return maxi;
}


int main(){}
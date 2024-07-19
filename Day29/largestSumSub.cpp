#include<bits/stdc++.h>
using namespace std;

int maxiSumSubarray(vector<int>&nums){
    int s = 0;
    for(int i = 0;i<nums.size();i++){
        int sum = 0;
        for(int j = i;j<nums.size();j++){
            sum+=nums[j];
            s = max(s,sum);
        }
    }

    return s;
}

// kadanes algo!!
int maxiSumSubarray(vector<int>&nums){
    int ans = INT_MIN;
    int s = 0;
    for(int i = 0;i<nums.size();i++){
        s+=nums[i];
        ans = max(ans,s);
        if(s < 0)s=0;
    }

    return ans;
}
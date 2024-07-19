#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&nums){
    unordered_map<int,int>mp;
    for(int e:nums){
        mp[e]++;
        if(mp[e] >= (nums.size())/2)return e;
    }
    return -1;
}

// 
int majority(vector<int>&nums){
    int c = 0;
    int n = -1;
    for(int i = 0;i<nums.size();i++){
        if(nums[i] == n)c++;
        else c--;
        if(c <= 0){
            c = 1;
            n = nums[i];
        }
    }

    return (c <= 0 ? -1 : n);
}
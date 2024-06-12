#include<bits/stdc++.h>

using namespace std;

bool twoSum(vector<int>&nums,int&t){
    //approach1
    // for(int i = 0;i<nums.size();i++){
    //     for(int j = 0;j<nums.size();j++){
    //         if(nums[j] == t - nums[i])return 1;
    //     }
    // }

    //approach2
    // sort(nums.begin(),nums.end());
    // int s = 0;
    // int e = nums.size()-1;
    // while(s <= e){
    //     int sum = nums[s]+nums[e];
    //     if(sum == t)return 1;
    //     else if(sum > t)e--;
    //     else s++;
    // }

    // approach3
    unordered_map<int,int>mp;
    for(int i = 0;i<nums.size();i++){
        int y = t - nums[i];
        if(mp.count(y))return 1;
        mp[nums[i]]++;
    }

    return 0;
}

int main(){}
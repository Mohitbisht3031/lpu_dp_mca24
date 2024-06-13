#include<bits/stdc++.h>

using namespace std;

bool threeSum(vector<int>&nums,int&t){
    // approach1
    // for(int i = 0;i<nums.size();i++){
    //     for(int j = 0;j<nums.size();j++){
    //         for(int k = 0 ;k<nums.size();k++){
    //             if(nums[i]+nums[k]+nums[j] == t)return 1;
    //         }
    //     }
    // }

    // approach2
    for(int i = 0;i<nums.size();i++){
        int tr = t = nums[i];
        unordered_map<int,int>mp;
        for(int j = 0;j<nums.size();j++){
            if(j == i)continue;
            if(mp.count(tr - nums[j]))return 1;
            mp[nums[j]]++;
        }

    }

    return 0;
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

bool threeSum(vector<int>&nums,int&t){
    for(int i = 0;i<nums.size();i++){
        for(int j = 0;j<nums.size();j++){
            for(int k = 0 ;k<nums.size();k++){
                if(nums[i]+nums[k]+nums[j] == t)return 1;
            }
        }
    }

    return 0;
}

int main(){}
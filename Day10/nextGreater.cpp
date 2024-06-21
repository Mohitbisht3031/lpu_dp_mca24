#include<bits/stdc++.h>

using namespace std;

int find(vector<int>&nums,int v){
    for(int i = 0;i<nums.size();i++){
        if(nums[i] == v)return i;
    }
    return -1;
}

vector<int> nextGreater(vector<int>&nums,vector<int>&q){
    vector<int>ans;
    for(int i = 0;i<q.size();i++){
        int ind = find(nums,q[i]);
        int a = -1;
        for(int j= ind+1;j<nums.size();j++){
            if(q[i] < nums[j]){
                a = nums[j];
                break;
            }
        }
        ans.push_back(a);
    }

    return ans;
}

int main(){}
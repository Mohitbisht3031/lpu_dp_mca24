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


vector<int> nextGreater(vector<int>&nums,vector<int>&q){
    stack<int>stk;
    vector<int>ng(nums.size());
    ng[nums.size() - 1] = -1;
    stk.push(nums.size()-1);

    for(int i = nums.size()-2;i>=0;i--){
        while(!stk.empty() && nums[stk.top()] <= nums[i])stk.pop();
        if(stk.empty()){
            ng[i] = -1;
        }else{
            ng[i] = stk.top();
        }
        stk.push(i);
    }
    vector<int>ans;
    for(int i = 0;i<q.size();i++){
        for(int j = 0;j<nums.size();j++){
            if(q[i] == nums[j]){
                ans.push_back(nums[ng[j]]);
            }
        }
    }

    return ans;
}


int main(){}
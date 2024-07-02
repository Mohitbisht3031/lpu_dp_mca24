#include<bits/stdc++.h>

using namespace std;


vector<int> kLargest(vector<int>&nums,int k){
    priority_queue<int>pq;
    for(int i = 0;i<nums.size();i++){
        if(pq.size() < k){
            pq.push(nums[i]);
        }else{
            if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }

    vector<int>v;
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}

int main(){}
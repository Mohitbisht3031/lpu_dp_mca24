#include<bits/stdc++.h>

using namespace std;

// 239.
vector<int> slidingWindowMax(vector<int>&nums,int k){
    vector<int>ans;
    for(int i = 0;i<nums.size()-k;i++){
        int maxi = INT_MIN;
        for(int j = i;j<i+k;j++){
            maxi = (maxi < nums[j] ? nums[j] : maxi);
        }
        ans.push_back(maxi);
    }
    return ans;
}


vector<int> slidingWindowMax(vector<int>&nums,int k){
    deque<int>dq;
    for(int i = 0;i<k;i++){
        while(dq.size() > 0 && nums[i] >= nums[dq.back()])dq.pop_back();
        dq.push_back(i);
    }

    vector<int>ans;
    for(int i = k;i<nums.size();i++){
        ans.push_back(nums[dq.front()]);
        while(dq.size() > 0 && nums[i] >= nums[dq.back()])dq.pop_back();
        dq.push_back(i);
        if(dq.front() <= dq.back() - k)dq.pop_front();
    }
    ans.push_back(dq.front());
    return ans;
}

int main(){}
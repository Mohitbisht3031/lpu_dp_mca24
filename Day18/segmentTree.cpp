#include<bits/stdc++.h>

using namespace std;

// O(n)
void build(vector<int>&nums,vector<int>&seg,int ind,int lb,int ub){
    if(lb == ub){
        seg[ind] = nums[lb];
        return;
    }
    int mid = (lb+ub)/2;
    build(nums,seg,2*ind+1,lb,mid);
    build(nums,seg,2*ind+2,mid+1,ub);
    seg[ind] = max(seg[2*ind+1],seg[2*ind+2]);
}

// O(log n)
int query(vector<int>&seg,int ind,int lb,int ub,int l,int r){
    if(lb >= l && ub <= r){
        return seg[ind];
    }
    int mid = (lb+ub)/2;
    int left = query(seg,2*ind+1,lb,mid,l,r);
    int right = query(seg,2*ind+2,mid+1,ub,l,r);

    return max(left,right);
}

int main(){}
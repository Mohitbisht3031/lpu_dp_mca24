#include<bits/stdc++.h>

using namespace std;


void fill(vector<int>&rh,vector<int>&lh,vector<int>&h){
    rh[h.size() - 1] = h[h.size()-1];
    for(int i = h.size()-2;i>=0;i--){
        rh[i] = max(rh[i+1],h[i]);
    }

    lh[0] = h[0];
    for(int i = 1;i<h.size();i++){
        lh[i]=max(lh[i-1],h[i]);
    }
    return;
}


int rainWaterTrapping(vector<int>&h){
    vector<int>rh(h.size());
    vector<int>lh(h.size());
    fill(rh,lh,h);
    int ans = 0;
    for(int i = 0;i<h.size();i++){
        ans+=(min(lh[i],rh[i]) - h[i]);
    }

    return ans;
}

int main(){}
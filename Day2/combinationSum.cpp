#include<bits/stdc++.h>

using namespace std;

/*
given an integer array and value target , we are supposed to return all the subset who's 
combined sum is equal to the given target .
note : we can use a number any number of times we want
 */

void rec(vector<int>&v,vector<vector<int>>&ans,int i,int t,vector<int>&vec){
    if(t == 0){
        ans.push_back(vec);
        return;
    }
    if(t < 0 || i > v.size())return;

    // when included
    vec.push_back(v[i]);
    rec(v,ans,i,t-v[i],vec);
    vec.pop_back();
    // when not including!!
    rec(v,ans,i+1,t,vec);
    return;
}

vector<vector<int>> combinedSum(vector<int>&v,int &target){
    if(target == 0)return {};
    vector<vector<int>>ans;
    vector<int>vec;
    rec(v,ans,0,target,vec);
    return ans;
}

int main(){

}
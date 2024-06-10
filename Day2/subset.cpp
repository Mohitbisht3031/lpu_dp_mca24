#include<bits/stdc++.h>

using namespace std;

/*
given an integer array you are suppose to return all the possible subset possible
out of this array
*/

void rec(vector<int>&v,vector<vector<int>>&ans,int i,vector<int>&vec){
    if(i >= v.size()){
        ans.push_back(vec);
        return ;
    }

    //when current element is contributing in the subset
    vec.push_back(v[i]);
    rec(v,ans,i+1,vec);
    vec.pop_back();
    //when current element is not contributing in the subset
    rec(v,ans,i+1,vec);
    return;
}

vector<vector<int>> subset(vector<int>&v){
    if(v.size() == 1)return {{},{v[0]}};
    vector<vector<int>>ans;
    vector<int>vec;
    rec(v,ans,0,vec);
    return ans;
}

int main(){

}
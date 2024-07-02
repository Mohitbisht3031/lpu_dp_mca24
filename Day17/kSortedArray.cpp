#include<bits/stdc++.h>

using namespace std;

vector<int> kSortedArray(vector<vector<int>>&v){
    //code
    priority_queue<int>pq;
    for(int i = 0;i<v.size();i++){
        for(auto e:v[i])pq.push(e);
    }

    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    
    return ans;
}
int main(){}
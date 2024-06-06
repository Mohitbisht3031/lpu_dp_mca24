#include<bits/stdc++.h>

using namespace std;

int main(){
    // int n,m;
    // cin>>n>>m;

    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        int val;
        cin>>val;
        mp[val]++;
    }

    for(auto m : mp){
        cout<<m.first<<" "<<m.second<<endl;
    }

    // int c = 0;
    // // unordered_map<int,int>mp;
    // for(int i = 0;i<n;i++){
    //     int val;
    //     cin>>val;
    //     if(val == m)c++;
    //     // mp[val]++;
    // }
    // cout<<"the freq of m is: "<<c<<endl;
}
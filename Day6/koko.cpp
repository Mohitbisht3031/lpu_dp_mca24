#include<bits/stdc++.h>

using namespace std;

bool check(vector<int>&b,int&s,int&h){
    int t = 0;
    for(int i = 0;i<b.size();i++){
        t+=(ceil((double)b[i] / s));
    }

    return t <= h;
}

int koko(vector<int>&b,int&h){
    int s = 1;
    int e = accumulate(b.begin(),b.end(),0);
    int ans = INT_MAX;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(check(b,mid,h)){
            e = mid-1;
            ans = min(mid,ans);
        }else s = mid+1;
    }

    return ans;
}

int main(){}
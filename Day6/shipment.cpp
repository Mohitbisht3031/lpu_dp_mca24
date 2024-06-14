#include<bits/stdc++.h>

using namespace std;

bool check(vector<int>&w,int&mw,int&d){
    int c = 0;
    int s = 0;
    for(int i = 0;i<w.size();i++){
        if(s+w[i] > mw){
            c++;
            s = w[i];
        }else s+=w[i];
    }

    return c <= d;
}

int minWeight(vector<int>&w,int&d){
    int s = *max_element(w.begin(),w.end());
    int e = accumulate(w.begin(),w.end(),0);

    int ans = INT_MAX;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(check(w,mid,d)){
            e = mid-1;
            ans = min(ans,mid);
        }else s = mid+1;
    }
    
    return ans;
}

int main(){}
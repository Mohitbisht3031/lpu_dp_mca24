#include<bits/stdc++.h>

using namespace std;

bool search(vector<int>&v,int&t){
    int lo = 0 ;
    int hi = v.size()-1;
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        if(v[mid] == t)return 1;
        if(v[mid] >= v[lo]){
            if(t >= v[lo] && t < v[mid]){
                hi = mid-1;
            }else lo =mid+1;
        }else{
            if(t > v[mid] && t <= v[hi]){
                lo = mid+1;
            }else hi = mid-1;
        }
    }
    return 0;
}

int main(){}
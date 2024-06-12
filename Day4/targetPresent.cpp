#include<bits/stdc++.h>
using namespace std;

// if we are having a sorted array
bool isPresent(vector<int>&v,int t){
    //approach1
    // for(auto e : v){
    //     if(e == t)return 1;
    // }
    // approach2 i.e binary search
    // int s = 0;
    // int e = v.size()-1;
    // while(s >= e){
    //     int mid = s+(e-s)/2;
    //     if(v[mid] == t)return 1;
    //     else if(v[mid] > t)e = mid-1;
    //     else s = mid+1;
    // }

    // approach3
    if(binary_search(v.begin(),v.end(),t))return 1;

    // upper_bound & lower_bound

    int ind = lower_bound(v.begin(),v.end(),t) - v.begin();

    return 0;

}

// the array is unsorted
bool isPresent(vector<int>&v,int t){
    sort(v.begin(),v.end()); //-> acc order
    sort(v.begin(),v.end(),greater<int>()); //->des order
    for(auto e : v){
        if(e == t)return 1;
    }
    return 0;
}

int main(){}

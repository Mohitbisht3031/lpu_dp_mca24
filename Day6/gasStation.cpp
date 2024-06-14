#include<bits/stdc++.h>
using namespace std;

int gasStation(vector<int>&g,vector<int>&c){
    int s = 0;
    int si = 0;
    int gs = 0;
    for(int i = 0;i<g.size();i++){
        s+=(g[i] - c[i]);
        gs+=(g[i] - c[i]);
        if(gs < 0){
            si = i+1;
            gs = 0;
        }
    }

    return (s < 0 ? -1 : si);
}

int main(){}
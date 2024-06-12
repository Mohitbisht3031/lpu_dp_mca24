#include<bits/stdc++.h>
using namespace std;
// approach 1
int findMax(vector<int>&g,vector<int>&s){
    int c = 0;
    for(int i = 0;i<g.size();i++){
        int ind = -1;
        for(int j = 0;j<s.size();j++){
            if(s[j] >= g[i]){
                if(ind == -1)ind = j;
                else{
                    ind = (s[j] < s[ind] ? j : ind);
                }
            }
        }
        if(ind != -1){
            c++;
            s[ind]*=-1;
        }
    }

    return c;
}

int findMax(vector<int>&g,vector<int>&s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int i = 0;
    int j = 0;
    int c = 0;

    while(i < s.size()){
        if(s[i] >= g[j]){
            c++;
            j++;
        }
        i++;
        if(j >= g.size())break;
    }

    return c;
}

int main(){
}
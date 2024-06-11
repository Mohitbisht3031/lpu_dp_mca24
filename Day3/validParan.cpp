#include<bits/stdc++.h>

using namespace std;
/*
given an integer n which represent the no. of pair of paranthese you have, genreate all the combination
of well formed parantrhese and return.
 */

void rec(int o,int c,string s,vector<string>&ans){
    if(o > c || o <= 0)return;
    if(o == 0 && c == 0){
        ans.push_back(s);
        return ;
    }

    rec(o-1,c,s+'(',ans);
    rec(o,c-1,s+')',ans);
    return;
}

vector<string> paran(int &n){
    if(n== 1)return {"()"};
    vector<string>ans;
    string s = "";
    rec(n,n,s,ans);
    return ans;
}

int main(){

}
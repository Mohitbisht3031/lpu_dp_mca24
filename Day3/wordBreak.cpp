#include<bits/stdc++.h>

using namespace std;

bool rec(string&s,int i,unordered_map<string,int>&mp){
    if(i >= s.size())return 1;
    string str = "";
    for(int j =i;j<s.size();j++){
        str+=s[j];
        if(mp.count(str) && rec(s,j+1,mp))return 1;
    }
    return 0;
}

bool wordBreak(string&s , vector<string>&wordDict){
    unordered_map<string,int>mp;
    for(auto s:wordDict)mp[s]++;

    return rec(s,0,mp);
}

int main(){}
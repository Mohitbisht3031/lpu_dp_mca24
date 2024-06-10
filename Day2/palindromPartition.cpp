#include<bits/stdc++.h>
using namespace std;

/*
given a string we are supposed to return all the partitions of the string 
which is a palindrome
*/
bool isValid(string&s){
    if(s.size() == 1)return 1;
    int i =0 ,j=s.size()-1;
    while(i < j){
        if(s[i] != s[j])return 0;
        i++;
        j--;
    }
    return 1;
}

void rec(string&s , int i , vector<vector<string>>&ans,vector<string>&v){
    if(i >= s.size()){
        ans.push_back(v);
        return;
    }
    string str = "";
    for(int j = i;j<s.size();j++){
        str+=s[j];
        if(isValid(str)){
            v.push_back(str);
            rec(s,j+1,ans,v);
            v.pop_back();
        }
    }
}

vector<vector<string>> partition(string &s){
    if(s.size() == 1)return {{s}};
    vector<vector<string>>ans;
    vector<string>v;
    rec(s,0,ans,v);
    return ans;
}

int main(){

}
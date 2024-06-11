#include<bits/stdc++.h>

using namespace std;

bool isValid(int &i,int &j,vector<string>&v){
    int r = i-1;
    while(r >=0){
        if(v[r][j] == 'Q')return 0;
        r--;
    }
    r = i-1;
    int c = j-1;

    while(r >=0 && c >=0){
        if(v[r][j] == 'Q')return 0;
        r--;
        j--;
    }

    r=i-1;
    c = j+1;
    while(r >= 0 && c < v[0].size()){
        if(v[r][c] == 'Q')return 0;
        r--;
        c++;
    }


    return 1;
}

void rec(int n,vector<string>&v,int i,vector<vector<string>>&ans){
    if(n == 0){
        ans.push_back(v);
        return;
    }
    if(i > v.size())return;

    
    for(int k = 0;k<v[i].size();k++){
        if(isValid(i,k,v)){
            v[i][k] = 'Q';
            rec(n-1,v,i+1,ans);
            v[i][k] = '.';
        }
    }

    return ;
}

vector<vector<string>> nQueen(int n){
    vector<vector<string>>ans;
    string s="";
    for(int i =0;i<n;i++)s+='.';
    vector<string>v(n,s);

    rec(n,v,0,ans);
    return ans;

}

int main(){

}
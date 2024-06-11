#include<bits/stdc++.h>

using namespace std;

bool check(char&ch , int&i,int &j,vector<vector<char>>&b){
    for(int k = 0;k<9;k++){
        if(b[i][k] == ch)return 0;
        if(b[k][j] == ch)return 0;

        if(b[3*(i/3)+k/3][3*(j/3)+k%3])return 0;
    }
    return 1;
}

bool rec(vector<vector<char>>&b){
    bool ans = 0;
    for(int i = 0;i<b.size();i++){
        for(int j = 0;j<b[0].size();j++){
            if(b[i][j] != '.')continue;
            for(char k = '1';k<='9';k++){
                if(check(k,i,j,b)){
                    b[i][j] = k;
                    if(rec(b))return 1;
                    b[i][j] = '.';
                }
            }
            if(!ans)break;        
        }
        if(!ans)break;
    }
    return ans;
}

void sudoku(vector<vector<char>>&board){
    rec(board);
    return;
}

int main(){}
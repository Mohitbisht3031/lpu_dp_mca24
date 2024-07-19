#include<bits/stdc++.h>

using namespace std;

bool small(vector<vector<int>>&mat,int i,int j){
    for(int k = 0;k<mat[0].size();k++){
        if(mat[i][j] > mat[i][k])return 0;
    }

    return 1;
}

bool big(vector<vector<int>>&mat,int i,int j){
    for(int k = 0;k<mat.size();k++){
        if(mat[i][j] < mat[k][j])return 0;
    }
    return 1;
}

vector<int> luckyNum(vector<vector<int>>&mat){
    vector<int>ans;
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(small(mat,i,j) && big(mat,i,j)){ans.push_back(mat[i][j]);
                break;
            }
        }
    }

    return ans;
}


// 
vector<int> luckyNum(vector<vector<int>>&mat){
    vector<int>r(mat.size(),INT_MAX);
    vector<int>c(mat[0].size(),INT_MIN);
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] < r[i]){
                r[i] = mat[i][j];
            }
            if(mat[i][j] > c[j]){
                c[j]=mat[i][j];
            }
        }
    }

    for(int i = 0 ;i<r.size();i++){
        for(int j = 0;j<c.size();j++){
            if(r[i] == c[j])return {r[i]};
        }
    }

    return {};
}
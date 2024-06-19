#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>setMatrix(vector<vector<int>>&mat){
    vector<int>r(mat.size(),-1);
    vector<int>c(mat[0].size(),-1);
    for(int i = 0 ;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == 0){
                r[i] = 0;
                c[j] = 0;
            }
        }
    }

    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat.size();j++){
            if(r[i] == 0 && c[j] == 0)mat[i][j] = 0;
        }
    }

}

int main(){}
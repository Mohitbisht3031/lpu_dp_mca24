#include<bits/stdc++.h>

using namespace std;

int LAR(vector<int>&h){
    vector<int>rg(h.size());
    vector<int>lg(h.size());
    fill(h,rg,lg);//implement this fill

    int maxi = 0;
    for(int i =0 ;i<h.size();i++){
        int w = rg[i] - lg[i] - 1;
        int ar = h[i]*w;
        maxi = max(maxi,ar);
    }

    return maxi;
}

int maximalRectangle(vector<vector<int>>&mat){
    vector<int>h(mat[0].size(),0);
    int a = 0;
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == 1){if(i == 0){
                h[j] = (mat[i][j] == 1);
            }else{
                if(mat[i-1][j] ==1)h[j]++;
                else h[j]=0;
            }}
        }
        a = max(a,LAR(h));
    }

    return a;
}

int main(){}
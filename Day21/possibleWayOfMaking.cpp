#include<bits/stdc++.h>

using namespace std;

//
int helper(int a,int b,int n){
    if(a < 0)return 0;
    if(a == 0)return 1;
    int nn = pow(n,b);
    int a1 = helper(a - nn,b,n+1);
    int a2 = helper(a,n,n+1);

    return a1+a2;
}

int possibleWayOfMaking(int a,int b){
    return helper(a,b,1);
}


int main(){}
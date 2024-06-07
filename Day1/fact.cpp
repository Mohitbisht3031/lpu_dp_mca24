#include<bits/stdc++.h>
using namespace std;

/*
1. base case
2. recursive call
3. cal.
*/

int fact(int n){
    if(n == 1)return 1;
    int ans = fact(n-1);
    return n*ans;
}

int main(){
    int n;
    cin>>n;
    cout<<"the factorial of the given no. is "<<fact(n)<<endl;
    return 0;
}
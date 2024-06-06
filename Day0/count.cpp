#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr;
    vector<int>v(n);

    int c = 0;
    for(int i = 1;i<=n;i++){
        // cin>>v[i];
        int val;
        cin>>val;
        arr.push_back(val);
    }

    for(int i = 0;i<arr.size();i++){
        if(arr[i]%2)c++;
    }

    cout<<c<<endl;
}


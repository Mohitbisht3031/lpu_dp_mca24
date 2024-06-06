#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_set<int>st;
    for(int i = 0;i<n;i++){
        int val;
        cin>>val;
        st.insert(val);
    }

    cout<<"no. of unique elements in the given input is :"<<st.size()<<endl;
}
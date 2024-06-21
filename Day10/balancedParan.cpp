#include<bits/stdc++.h>

using namespace std;

bool balancedParan(string s){
    if(s.size()%2 == 1)return 0;
    stack<char>st;
    for(char ch : s){
        if(ch == '{'){
            st.push(ch);
        }else{
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }else return 0;
        }
    }

    return 1;
}

int main(){}
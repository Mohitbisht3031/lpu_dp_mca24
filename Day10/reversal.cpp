#include<bits/stdc++.h>

using namespace std;

int reversals(string s){
    if(s.size()%2 == 1)return -1;
    stack<char>st;
    for(char ch : s){
        if(ch == '('){
            st.push(ch);
        }else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }else{
                st.push(ch);
            }
        }
    }

    int c = 0;
    while(!st.empty()){
        char ch1 = st.top();
        st.pop();
        char ch2 = st.top();
        st.pop();
        if(ch1 == ch2){
            c++;
        }else c+=2;
    }

    return c;
}

int main(){}
#include<bits/stdc++.h>

using namespace std;

bool redundent(string s){
    string ops = "+-/*";
    stack<char>st;
    for(char ch : s){
        if(ch == '(' || ops.find(ch) != string::npos){
            st.push(ch);
        }else{
            bool f = 0;
            while(!st.empty() && st.top() != '('){
                f =1;
                st.pop();
            }
            st.pop();
            if(!f)return 1;
        }
    }

    return 0;
}

int main(){}
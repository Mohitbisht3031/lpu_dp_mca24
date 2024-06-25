#include<bits/stdc++.h>

using namespace std;

class Stack{
    stack<int>st;
    int min = -1;

    public:

    void push(int n){
        if(min == -1)min = n;
        // else min = (n < min ? n : min);
        if(n < min){st.push(min);
        min = n;
        }
        st.push(n);
    }

    int top(){
        return st.top();
    }

    int mini(){
        return min;
    }

    void pop(){
        if(st.top() == min){
            st.pop();
            min = st.top();
            st.pop();
        }else st.pop();
    }

};

int main(){}
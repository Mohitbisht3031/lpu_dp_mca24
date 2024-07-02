#include<bits/stdc++.h>

using namespace std;

class TrieNode{
    public:
    vector<TrieNode*>child;
    bool isEnd;
    TrieNode(){
        child = vector<TrieNode*>(26,NULL);
        isEnd = false;
    }
};

// O(no. of words * maxLengthOf Word)
TrieNode* insert(string&s,int i){
    TrieNode* nn = new TrieNode();
    if(i == s.size()){
        nn->isEnd = 1;
        return nn;
    }

    nn->child[s[i] - 'a'] = insert(s,i+1);

    return nn;
}

// O(no. of words * maxLengthOf Word)
bool search(TrieNode*root,string&s,int i){
    if(i == s.size()){
        return root->isEnd;
    }

    if(root->child[s[i] -'a'] == NULL)return 0;
    
    return search(root->child[s[i] - 'a'],s,i+1);
}

int main(){

}
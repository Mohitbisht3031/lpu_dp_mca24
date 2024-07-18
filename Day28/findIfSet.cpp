#include<bits/stdc++.h>
using namespace std;

bool isIthBitSet(int n,int i){
    while(i-- > 1){
        n>>=1;
    }

    return (n&1);
}
// approach 2
bool isIthBitSet(int n,int i){
    int nn = (1 << i);
    return (n&nn);
}
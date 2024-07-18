#include<bits/stdc++.h>
using namespace std;

int minFLips(int s,int t){
    int c = 0;
    for(int i = 0;i<32;i++){
        if(((s>>i)&1) != ((t>>i)&1))c++;
    }

    return c;
}
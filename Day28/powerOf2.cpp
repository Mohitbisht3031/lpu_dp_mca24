#include<bits/stdc++.h>
using namespace std;

bool isPowerof2(int n){
    if(!(n&(n-1)))return 1;
    return 0;
}
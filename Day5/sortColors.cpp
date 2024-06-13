#include<bits/stdc++.h>
using namespace std;

void sortColor(vector<int>&arr){
    // approach1
    // int f[] = {0,0,0};
    // for(auto e : arr)f[e]++;
    // for(int i = 0;i<arr.size();i++){
    //     if(f[0] > 0){arr[i] = 0;
    //         f[0]--;
    //     }else if(f[1] > 0){
    //         arr[i] = 1;
    //         f[1]--;
    //     }else{
    //         arr[i] = 2;
    //         f[2]--;
    //     }
    // }

    //approach2
    int s = 0;
    int e = arr.size()-1;
    int i = 0;

    while(i <= e){
        if(arr[i] == 0){
            swap(arr[s],arr[i]);
            s++;
        }else if(arr[i] == 2){
            swap(arr[e] , arr[i]);
            e--;
            i--;
        }
        i++;
    }

    return ;
}

int main(){}
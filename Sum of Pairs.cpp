#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
bool solve(int arr[],int k,int n){
     unordered_set<int>M;
    for(int i=0;i<n;i++){
       
        if(M.find(k-arr[i])!=M.end()) return true;
        M.insert(arr[i]);
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(solve(arr,k,n)) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std;


int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n,ans=0;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(long long int i=0;i<n;i++){
            long long int m=INT_MAX;
           long long  int M=INT_MIN;
            for(long long int j=i;j<n;j++){
                m=min(m,arr[j]);
                M=max(M,arr[j]);
                if((M-m+1)==(j-i+1)){
                    ans=max(ans,j-i+1);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

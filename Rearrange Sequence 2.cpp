#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
           
            set<int> st;
            for(int j=i;j<n;j++){
                if(st.find(arr[j])!=st.end()){
                break;
                }else{
                    st.insert(arr[j]);
                }
                maxi = max(maxi,arr[j]);
                mini = min(mini,arr[j]);
                if((maxi-mini+1)==(j-i)+1){
                    ans = max(ans,j-i+1);
                }
            }
        }
        cout<< ans <<endl;
    }
    return 0;
}

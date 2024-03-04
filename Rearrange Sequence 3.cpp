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
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int res=0;
        for(int i=0;i<n;i++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            int count=0;
            set<int> st;
            for(int j=i;j<n;j++){
                if(st.find(ar[j])!=st.end()){
                    count++;
                }else{
                    st.insert(ar[j]);
                }
                maxi = max(maxi,ar[j]);
                mini = min(mini,ar[j]);
                if((maxi-mini+1)==(j-i)+1-count){
                    res = max(res,j-i+1);
                }
            }
        }
        cout<< res <<endl;
    }
    return 0;
}

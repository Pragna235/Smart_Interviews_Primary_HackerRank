#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkBit(int n,int i){
    return ((n>>i)&1);
}

long long int solve(long long int arr[],int n){
    long long int ans=0;
    for(int i=0;i<=30;i++){
        int set=0;
        for(int j=0;j<n;j++){
            if(checkBit(arr[j],i)){
                  set+=1;
            }
             
}
        ans+=(set)*(n-set)*(1ll<<i);
    }
    return 2*ans;
   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,n)<<endl;
       
    }
    return 0;
}

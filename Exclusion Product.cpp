#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long m = 1e9+7;
        long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int pp[n],sp[n];
        pp[0]=arr[0];
        sp[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++){
            pp[i]=(pp[i-1]*arr[i])%m;
        }
        
        for(int j=n-2;j>=0;j--){
            sp[j]=(sp[j+1]*arr[j])%m;
        }
        
        long brr[n];
        brr[0]=sp[1];
        brr[n-1]=pp[n-2];
        
        for(int i=1;i<n-1;i++){
            brr[i]=((pp[i-1]%m)*(sp[i+1]%m));
        }
        
        for(int i=0;i<n;i++){
            cout<<(brr[i]%m)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

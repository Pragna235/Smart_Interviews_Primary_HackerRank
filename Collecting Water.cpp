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
        int n,sum=0;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int l[n],r[n];
        
        l[0]=arr[0];
        r[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++){
            l[i]=max(l[i-1],arr[i]);
        }
        
        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],arr[i]);
        }
        
        for(int i=0;i<n;i++){
            sum+=(min(l[i],r[i])) - arr[i];
        }
        cout<<sum<<endl;
        
        
        
    }
    
    return 0;
}

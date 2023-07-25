#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool subsetSum( int arr[], int n, int s)
{
    if(n==-1)
        return s==0;
    return subsetSum(arr,n-1,s-arr[n]) || subsetSum(arr,n-1,s);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(subsetSum(arr,n-1,s))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

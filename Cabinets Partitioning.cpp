#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int sum(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
       
    }
    return sum;
}

int max2(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}

bool valid(int arr[],int n, int k, int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        if((sum+arr[i] )> mid){
            k--;
            sum=0;
        }
        sum+=arr[i];
    }
    return k>0;
}
int solve(int arr[],int n, int k){
    int l=max2(arr,n),h=sum(arr,n);
    int ans=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(valid(arr,n,k,mid)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;

  
}




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       
        cout<<solve(arr,n,k)<<endl;
       
        
    }
    return 0;
}

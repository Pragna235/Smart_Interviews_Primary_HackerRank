#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int arr[],int n)
{
    for(int i=0;i<n;i++){
      if(arr[i]<1 || arr[i]>n){
          arr[i]=n+10;
      }  
    }
     for(int i=0;i<n;i++){
         if(arr[i]!=(n+10)){
             arr[abs(arr[i])-1] = -abs(arr[abs(arr[i])-1]);
             
         }
     }
        for(int i=0;i<n;i++){
            if(arr[i]>0) return i+1;
        }
    
    return n+1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,n)<<endl;
    }
    
    return 0;
}

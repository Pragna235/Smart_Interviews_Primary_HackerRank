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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       
        int ans=1;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]==ans){
                ans++;
            }
            else{
                cout<<ans-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

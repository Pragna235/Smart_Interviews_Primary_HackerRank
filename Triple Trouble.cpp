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
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<=30;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if((arr[j]>>i)&1)
                    count++;
            }
            if(count%3!=0)
                ans=ans+(1<<i);
            
        }
        cout<<ans<<endl;
    }
    return 0;
}

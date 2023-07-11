#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int power(int n ){
    long long int ans=1,x=2,mod=1000000007;
    while(n!=0){
        if(n&1)
            ans=(ans*x)%mod;
        x=(x*x)%mod;
           
            n=n>>1;
    }
    return ans;
   
}

long long int solve(int x, int y){
    return (x==y)?power(x):(power(x)+power(y))%1000000007;
   
   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<solve(x,y)<<endl;
    }
    return 0;
}

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
        long long int a,b,ans=1;
        cin>>a>>b;
        long long int x=a;
        while(b>0){
            if((b&1)==1){
                ans=((ans%1000000007)*(x%1000000007))%1000000007;
            }
            x=((x%1000000007)*(x%1000000007))%1000000007;
            b=b>>1;
        }
        cout<<ans<<endl;
    }
    return 0;
}

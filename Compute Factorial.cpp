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
    long long arr[1000001];
    arr[0]=1;
        for(long long i=1;i<=1000000;i++){
            arr[i]=(arr[i-1]*i)%1000000007;
        }
    while(t--){
         int n;
        cin>>n;
       
       
        cout<<arr[n]%1000000007<<endl;
       
       
       
       
       
       
    }
    return 0;
}

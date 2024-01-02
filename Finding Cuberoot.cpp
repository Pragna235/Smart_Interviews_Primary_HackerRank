#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int cuberoot(long long int n){
    long long int l=1,h=1e6;
    if(n<0){
        l=-1*1e6;h=-1;
    }
    while(l<=h ){
        long long int mid=(l+h)/2;
        if((mid)==n/(mid*mid))
            return mid;
        else if((mid)>n/(mid*mid))
            h=mid-1;
        else
            l=mid+1;
    }
    return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<cuberoot(n)<<endl;
    }
    return 0;
}

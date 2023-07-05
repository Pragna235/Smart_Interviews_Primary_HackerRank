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
        int n,count=0;
        cin>>n;
        while(n>0){
            count=count+n/5;
            n=n/5;
        }
        cout<<count<<endl;
    }
    return 0;
}

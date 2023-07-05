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
        long long n;
        cin>>n;
        if((n & (n-1))==0)
            cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
    return 0;
}

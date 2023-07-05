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
        long long a,b,x,y,hcf,lcm,temp;
        cin>>a>>b;
        x=a;
        y=b;
        while(y!=0){
            temp=y;
            y=x%y;
            x=temp;
        }
        hcf=x;
        lcm=(a*b)/hcf;
        cout<<lcm<<" "<<hcf<<endl;
       
        
        
    }
    return 0;
}

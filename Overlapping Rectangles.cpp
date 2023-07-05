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
        long long xbl1,ybl1,xtr1,ytr1;
        long long xbl2,ybl2,xtr2,ytr2;
        
        cin>>xbl1>>ybl1>>xtr1>>ytr1;
        cin>>xbl2>>ybl2>>xtr2>>ytr2;
        
        long long a1 = abs(xtr1-xbl1) * abs(ytr1-ybl1);
        long long a2=abs(xtr2-xbl2) * abs(ytr2-ybl2);
        long long a3=0;
        long long xdist = min(xtr2,xtr1)-max(xbl1,xbl2);
        long long ydist = min(ytr2,ytr1)-max(ybl1,ybl2);
        
        if(xdist>0 && ydist>0)
            a3 = xdist*ydist;
        
        cout<<(a1+a2)-a3<<endl;
        
        
    }
    return 0;
}

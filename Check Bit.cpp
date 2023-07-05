#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
        long long n,i;
        cin>>n>>i;
        if((n & (1<<i)) == (1<<i))
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
        
  
    return 0;
}

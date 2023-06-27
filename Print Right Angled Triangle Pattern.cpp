#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,c=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"Case #"<<c<<":"<<endl;
        
        for(int i=1;i<=n;i++){
            for(int j=n-i;j>0;j--){
                cout<<" ";
            }
            for(int k=0;k<i;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        //cout<<endl;
        c++;
       
            
        
    }
    return 0;
}

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
        n=(n/2)+1;
        cout<<"Case #"<<c<<":"<<endl;
        
        //First Half
        for(int i=1;i<=n;i++){
            for(int j=i;j<n;j++){
                cout<<" ";
            }
            for(int k=1;k<=(2*i -1);k++){
                if(k==1 || k==(2*i -1))
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<" "<<endl;
            
        }
        
        //Second Half
        for(int i=n-1;i>=1;i--){
            for(int j=i;j<n;j++){
                cout<<" ";
            }
            for(int k=1;k<=(2*i -1);k++){
                if(k==1 || k==(2*i -1)){
                    cout<<"*";
                }
                else
                    cout<<" ";
                
            }
            cout<<" "<<endl;
        }
        
        
        
        
        
        c++;
    }
    return 0;
}

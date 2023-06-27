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
        int n1,m1;
        cin>>n1>>m1;
        int a1[n1][m1];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                cin>>a1[i][j];
            }
        }
        
        int n2,m2;
        cin>>n2>>m2;
        int a2[n2][m2];
        for(int i=0;i<n2;i++){
            for(int j=0;j<m2;j++){
                cin>>a2[i][j];
            }
        }
        
        int res[n1][m2];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                res[i][j]=0;
            }
        }
        
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                for(int k=0;k<n2;k++){
                    res[i][j] = res[i][j] + a1[i][k] * a2[k][j];
                }
            }
        }
        
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
        
        
        
    }
    return 0;
}

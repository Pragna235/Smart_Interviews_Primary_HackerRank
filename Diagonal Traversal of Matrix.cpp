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
    while(t--){ //test cases
        int n,sum=0;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){ //reading the array
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        
        for(int i=0;i<n;i++){ //elements of first row in reverse order
            if(i==0){
                for(int j=n-1;j>=0;j--){
                    sum=0;
                    int k=i,l=j;
                    while(k<n && l<n){
                        sum=sum+arr[k][l];
                        k++;
                        l++;
                    }
                    cout<<sum<<" ";
                    
                
            }
            }
            else{ //elements of first column
                int k=i,l=0;
                sum=0;
                while(k<n && l<n){
                    sum=sum+arr[k][l];
                    k++;
                    l++;
                    
                }
                cout<<sum<<" ";
                
               
            }
            }
        cout<<endl;
            
            
        }
        cout<<endl;
        
    
    return 0;
}

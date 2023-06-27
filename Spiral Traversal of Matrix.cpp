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
        int n;
        cin>>n;
        int arr[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        
        int i,left=0,right=n-1,top=0,bottom=n-1;
        
        while(left<=right && top<=bottom){
            for(i=left;i<=right;i++){
                cout<<arr[top][i]<<" ";
            }
            top++;
            
            for(i=top;i<=bottom;i++){
                cout<<arr[i][right]<<" ";
            }
            right--;
            
            if(top<=bottom){
                for(i=right;i>=left;i--){
                    cout<<arr[bottom][i]<<" ";
                }
                bottom--;
            }
            
            if(left<=right){
                for(i=bottom;i>=top;i--){
                    cout<<arr[i][left]<<" ";
                }
                left++;
            }
            //cout<<endl;
            
        }
        cout<<endl;
         
}
    return 0;
}


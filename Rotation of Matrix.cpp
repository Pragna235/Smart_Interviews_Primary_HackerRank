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
        int arr[n][n];
        for(int i=0;i<n;i++){ //Reading the Matrix
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        
        for(int i=0;i<n;i++){ //Transpose of the Matrix
            for(int j=0;j<i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        
        for(int i=0;i<n;i++){ //Reverse the Rows of Transpose Matrix
            reverse(arr[i],arr[i]+n);
        }
        cout<<"Test Case #"<<c<<":"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        //cout<<endl;
        c++;
    }
    return 0;
}

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
        int arr[n],s,j;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            s=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>s){
                arr[j+1]=arr[j];
                j--;
            }
            cout<<j+1<<" ";
                arr[j+1]=s;
        }
        cout<<endl;
    }
   
    return 0;
}

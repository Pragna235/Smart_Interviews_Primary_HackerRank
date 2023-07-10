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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int low=0,high=n-1;
        while(low<high){
            if(arr[low]==0){
                low++;
            }
            if(arr[high]==1){
                high--;
            }
            else if(arr[low]==1){
                swap(arr[low],arr[high]);
                low++;
                high--;
            }
        }
       
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

 

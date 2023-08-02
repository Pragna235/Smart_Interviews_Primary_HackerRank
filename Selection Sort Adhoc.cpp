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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int max=0;
        for(int i=n-1;i>0;i--){
            max=0;
            for(int j=0;j<=i;j++){
                if(arr[j]>arr[max])
                    max=j;
            }
            if(i!=max){
                swap(arr[max],arr[i]);

            }
              cout<<max<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int checkBit(int n,int i){
    if((n>>i)&1)
        return 1;
    return 0;
}
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
        vector<vector<int>> allSubsets;
       
        for(int i=0;i<(1<<n);i++){
            vector<int> subset;
            for (int j=0;j<n;j++){
                if(checkBit(i,j))
                    subset.push_back(arr[j]);
                sort(subset.begin(),subset.end());
           
            }
            allSubsets.push_back(subset);
        }
        sort(allSubsets.begin(),allSubsets.end());
       
       
        for(long unsigned int i=1;i<allSubsets.size();i++){
            for(long unsigned int j=0;j<allSubsets[i].size();j++){
                cout<<allSubsets[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

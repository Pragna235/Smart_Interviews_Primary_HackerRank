#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>cnt(k,0);
        for(int i=0;i<n;i++){
            int x=(arr[i]%k);
            cnt[x]++;
        }
        int count=0;
        for(int i=1;i<k;i++){
            if((i+i)%k==0 && cnt[i]>0){
                count+=1;
            }
            else{
                int j=max(cnt[i],cnt[k-i]);
                count=count+j;
            }
        }
        if(count%2==0)
        count=count/2;
        else
            count=(count/2)+1;
        if(cnt[0]>0){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

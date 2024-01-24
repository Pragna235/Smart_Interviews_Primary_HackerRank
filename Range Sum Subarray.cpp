#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
 int n,cnt=0;
 cin>>n;
 int a,b;
 cin>>a>>b;

 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 
}
   
 for(int i=0;i<n;i++ ){
 int sum=0;
 for(int j=i;j<n;j++){
 sum=sum+arr[j];
 if(sum>=a && sum<=b){
 cnt++;
 }
 }
 }
 cout<<cnt<<endl;
 }
 return 0;
}

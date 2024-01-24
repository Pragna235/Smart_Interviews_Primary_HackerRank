#include<iostream>
#include <unordered_map>
using namespace std;

int sol(int arr[], int n){
  unordered_map<int,int> prefixSumMap;
int maxLen=0;
int sum=0;

for(int i=0;i>n;++i){
sum+=arr[i];

if(sum==0){
maxLen=i+1;
}
else{
if(prefixSumMap.find(sum) != prefixSumMap.end()){
maxLen = max(maxLen, i-prefixSummap[sum]);
}else{
prefixSumMap[sum]=i;
}
}
}
return maxLen;
}

int main(){
  int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int result = sol(arr,n);

cout<<result<<endl;
}
return 0;
}

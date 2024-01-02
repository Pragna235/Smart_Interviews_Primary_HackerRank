#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;
void merge(int arr[],int n,int low,int mid,int high){
    int p1=low,p2=mid+1;
    int temp[high-low+1]={0};
    int p=0;
    while(p1<=mid && p2<=high){
        if(arr[p1]<=arr[p2])
            temp[p++]=arr[p1++];
        else{
            temp[p++]=arr[p2++];
        }
    }
    while(p1<=mid){
        temp[p++]=arr[p1++];
    }
    while(p2<=high){
        temp[p++]=arr[p2++];
    }
    for(int i=0;i<p;i++){
        arr[low+i]=temp[i];
    }
}
void mergeSort(int arr[],int n,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    mergeSort(arr,n,low,mid);
    mergeSort(arr,n,mid+1,high);
    merge(arr,n,low,mid,high);
}
int solve(int arr[],int n,int k){
    int low=0,high=n-1,ans=INT_MIN;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return arr[mid];
        }
        else if(k<arr[mid]){
            high=mid-1;
        }
        else{
            ans=arr[mid];
            low=mid+1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,n,0,n-1);
    int x;
    cin>>x;
    while(x--){
        int k;
        cin>>k;
        cout<<solve(arr,n,k)<<endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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

bool solve(int arr[],int n,int k){
    mergeSort(arr,n,0,n-1);
    int p1=0,p2=0;
    while(p1<n && p2<n){
        if((arr[p1]-arr[p2]==k || arr[p2]-arr[p1]==k) && p1!=p2)
            return true;
        else if(arr[p1]-arr[p2]<k || arr[p2]-arr[p1]>k)
            p1++;
        else
            p2++;
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        bool ans=solve(arr,n,k);
        if(ans==1)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}

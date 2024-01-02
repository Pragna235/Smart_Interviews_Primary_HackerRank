#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool valid(int arr[],int mid,int k,int n){
    int cows=1,last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=mid){
            cows++;
            last=arr[i];
            if(cows>=k) return true;
        }
    }
    return false;
}

int solve(int arr[],int n,int k){
    int l=0,h=arr[n-1],ans=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(valid(arr,mid,k,n)){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low,  int high)  {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
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
        quickSort(arr,0,n-1);
        cout<<solve(arr,n,k)<<endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int countSubarr(int arr[], int n){
  map<int,int> mp;
  int sum=0;
  int count=0;
  for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                arr[i] = -1;

            sum += arr[i];
            if (sum == 0)
                count++;

            if (mp[sum])
                count += mp[sum];
            if(mp[sum]==0)
                mp[sum]=1;
            else
                mp[sum]++;

        }
  return count;
}

int main()
{
    int t = 0;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        cout << countSubarr(arr, n) << endl;
    }
    return 0;
}

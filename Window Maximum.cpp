#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<deque>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        deque <int> dq;
        for(int i=0;i<k;i++){
             while ((!dq.empty()) && arr[i] > dq.back())
                 dq.pop_back();
            dq.push_back(arr[i]);
        }
        //cout<<dq.front()<<endl;
        sum+=dq.front();
        for(int i=k;i<n;i++){
            if ((!dq.empty()) && dq.front() == arr[i - k])
                dq.pop_front();
            while ((!dq.empty()) && arr[i] > dq.back())
                dq.pop_back();
            dq.push_back(arr[i]);
            sum+=dq.front();
            //cout<<dq.front()<<endl;
        }
        cout<<sum<<endl;
           
        }
   
    return 0;
}

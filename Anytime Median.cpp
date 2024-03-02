#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


void printMedian(int * arr, int n){
    priority_queue <int, vector<int>, greater<int>> minHeap;
    priority_queue <int> maxHeap;
    maxHeap.push(arr[0]);
    cout << maxHeap.top()<< " ";
    for (int i = 1; i<n; i++){
        if (arr[i] <= maxHeap.top()){
            maxHeap.push(arr[i]);
            if(maxHeap.size() - minHeap.size() >1){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
        }
     else if(arr[i] > maxHeap.top()){
         minHeap.push(arr[i]);
         if(minHeap.size() > maxHeap.size())
         {
             maxHeap.push(minHeap.top());
             minHeap.pop();
         }
     }
    cout << maxHeap.top() << " ";
    }
}

int main() {
    int t;
    cin >> t;

    for(int i = 0 ; i < t; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++)
            cin>>arr[j];
        printMedian(arr, n);
        cout << endl;
    }
}

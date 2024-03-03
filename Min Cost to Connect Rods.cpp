#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int connectRods(vector<int> &arr, int n){
    priority_queue <int, vector<int>, greater<int> > heap;

    for (int i =0; i < n; i++)
        heap.push(arr[i]);
    int res = 0;
    while(!heap.empty())
    {
        int temp = heap.top();
        heap.pop();
        if(heap.empty())
            return res;

        temp += heap.top();
        heap.pop();
        res+=temp;
        heap.push(temp);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> arr;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        cout << connectRods(arr, n) << endl;
    }
    return 0;
}

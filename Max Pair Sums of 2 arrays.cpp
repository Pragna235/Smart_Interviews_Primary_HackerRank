#include <bits/stdc++.h>
using namespace std;


void printKmaxSum( vector<int> &ar1, vector<int> &ar2, int n, int k){
    priority_queue<pair<int, pair<int, int>>> heap;

    heap.push(make_pair(ar1[n-1]+ar2[n-1], make_pair(n-1, n-1)));
    set<pair<int, int>> st;
    st.insert(make_pair(n-1, n-1));
    int i = n -1, j = n-1;
    while(k--){
        pair<int, pair<int, int>> obj = heap.top();
        cout << obj.first << " ";
        heap.pop();
        if(k==0)
            break;
        i = obj.second.first;
        j = obj.second.second;

        if(i-1 < 0 && j-1 < 0)
            break;
        if (i-1 >= 0 && st.find(make_pair(i-1, j)) == st.end())
        {
            heap.push(make_pair(ar1[i-1]+ar2[j], make_pair(i-1, j)));
            st.insert(make_pair(i-1, j));
        }
        if (j-1 >= 0 && st.find(make_pair(i, j-1)) == st.end())
        {
            heap.push(make_pair(ar1[i]+ar2[j-1], make_pair(i, j-1)));
            st.insert(make_pair(i, j-1));

        }

    }
    cout << endl;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >>k;

        vector<int> ar1;
        vector<int> ar2;
        for(int j = 0; j<n ; j++)
        {
            int x;
            cin >> x;
            ar1.push_back(x);
        }
        for(int j = 0; j<n ; j++)
        {
            int x;
            cin >> x;
            ar2.push_back(x);
        }
        sort(ar1.begin(), ar1.begin()+n);
        sort(ar2.begin(), ar2.begin()+n);
        printKmaxSum(ar1, ar2, n, k);
    }
    return 0;
}

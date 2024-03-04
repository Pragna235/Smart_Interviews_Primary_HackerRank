#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
void bfs(int s, vector<vector<int>>& adj_list, vector<bool>& v) {
    queue<int> q;
    q.push(s);
    v[s] = true;
   
    while (!q.empty()) {
        int node = q.front();
        q.pop();
       
        for (int x : adj_list[node]) {
            if (!v[x]) {
                v[x] = true;
                q.push(x);
            }
        }
    }
}
int solve(int n, vector<vector<int>>& edges) {
    vector<vector<int>> adj_list(n + 1);
    vector<bool> v(n + 1, false);
    int c = 0;
    for (const auto& edge : edges) {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i]) {
            bfs(i, adj_list, v);
            c++;
        }
    }
   
    return c;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>edges(m, vector<int>(2));
       
        for (int i = 0; i < m; ++i) {
            cin >> edges[i][0] >> edges[i][1];
        }
       
        int ans = solve(n, edges);
        cout << ans << endl;
    }
    return 0;
}

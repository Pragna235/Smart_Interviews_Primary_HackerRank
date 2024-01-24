#include <bits/stdc++.h>
using namespace std;

vector<bool> ans(1e5 + 1, false);

bool game() {
 ans[0] = false; 
 for (int i = 1; i <= (int)1e5; ++i) {
 for (int j = 1; j * j <= i; ++j) {
 if (!ans[i - j * j]) {
 ans[i] = true;
 break;
 }
 }
 }
}

int main() {
 int t;
 cin >> t;
 game();
 while (t--) {
 int n;
 cin >> n;
 cout << (ans[n] ? "Win" : "Lose") << endl;
 }
 return 0;
}

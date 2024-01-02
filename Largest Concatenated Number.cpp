#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void largestConcatenatedNumber(vector<string> &nums) {
    sort(nums.begin(), nums.end(),
        [](string X, string Y){
            string XY = X.append(Y);
            string YX = Y.append(X);
            return (XY.compare(YX) < 0 ? 0 : 1);
        });
    unsigned long long i;
    for(i = 0; i < nums.size(); ++i)
        cout << nums[i];    
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        largestConcatenatedNumber(nums);
    }
    return 0;
}






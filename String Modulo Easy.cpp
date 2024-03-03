#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


unsigned long long mod(string s, unsigned long long b){
    unsigned long long res =0;
    for (long long i = 0; i <s.length(); i++ ){
        res = (res *10 + (int)s[i] - '0')%b;
    }
    return res;
}

int main() {
    int t ;
    cin >> t;
    for(int i =0; i < t; i++){
        string a;
        unsigned long long b;
        cin >> a >> b;
        cout <<mod(a, b) << endl;
    }
    return 0;
}

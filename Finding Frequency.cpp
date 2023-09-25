#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,ele;
    unordered_map<int,int> freq;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        freq[ele]++;
        ele=0;
    }
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        
        
        cout<<freq[x]<<endl;
    }
    
    return 0;
}

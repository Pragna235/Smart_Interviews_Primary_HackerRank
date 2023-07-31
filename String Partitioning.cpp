#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <set>
using namespace std;

int minCount=INT_MAX;

int partition(string str,vector<string> l,int idx,int cnt){
    if(idx==str.length()){
        minCount=min(minCount,cnt-1);
        return 1;
    }
    int c=0;
    for(int i=idx;i<str.size();i++){
        string s=str.substr(idx,i-idx+1);
        if(find(l.begin(), l.end(),s) != l.end()){
            c+=partition(str,l,i+1,cnt+1);
        }
    }
    return c;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        vector<string> l;
        cin>>n;
        cin>>s;
        cin>>k;
        for(int i=0;i<k;i++){
            string c;
            cin>>c;
            l.push_back(c);
        }
        
        int count=partition(s,l,0,0);
        
        cout<<count<<" "<<minCount<<endl;
        
        minCount=INT_MAX;
    }
    return 0;
}

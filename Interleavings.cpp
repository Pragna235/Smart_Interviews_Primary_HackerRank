#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(string s1, string s2, int p1, int p2, string s){
    //Base Condition
    int n=s1.size();
    int m=s2.size();
    int q=s.size();
    if(p1>n || p2>m )
        return ;
     if(q==(m+n) ){
        cout<<s<<endl;
        return;
    }
    
    if(s1[p1]<s2[p2]){
        solve(s1,s2,p1+1, p2,s+s1[p1]);
        solve(s1,s2,p1,p2+1,s+s2[p2]);
    }
    else{
        solve(s1,s2,p1,p2+1,s+s2[p2]);
        solve(s1,s2,p1+1, p2,s+s1[p1]);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    int i=0;
    while(i<t){
        string s1,s2,s="";
        int p1=0,p2=0;
        cin>>s1>>s2;
        cout<<"Case #"<<i+1<<":"<<endl;
        solve(s1,s2,p1,p2,s);
        i++;
        
    }
    return 0;
}

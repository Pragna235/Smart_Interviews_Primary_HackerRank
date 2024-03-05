#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int n;
        cin>>n;
        stack<int>maxi;
        cout<<"Case "<<i++<<":"<<endl;
        while(n--){
            char a;
            cin>>a;
            if(a=='A'){
                int x;
                cin>>x;
                if(maxi.empty()) maxi.push(x);
                else maxi.push(max(x,maxi.top()));
            }
            else if(a=='R'){
                if(!maxi.empty())
                maxi.pop();
            }
            else{
                if(maxi.empty()) cout<<"Empty"<<endl;
                else
                cout<<maxi.top()<<endl;
            }
           
        }
    }
    return 0;
}

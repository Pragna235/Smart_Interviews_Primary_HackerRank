#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
    {
    long n;
        cin>>n;
        if(n==1 || n%6){
            cout<<"Santa"<<endl;
            
        }
        else{
            cout<<"Banta"<<endl;
        }
    }
    return 0;
}

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
    int top=-1;
    int arr[t+1];
    while(t--){
        string operation;
        cin>>operation;
        
        if(operation=="push"){
            int x;
            cin>>x;
            ++top;
            arr[top]=x;
            
        }
        else{
            if(top==-1)
                cout<<"Empty"<<endl;
            else
            {cout<<arr[top]<<endl;
             top--;}
            
            
        }
        
        
        
        
        
        
        
    }
    return 0;
}

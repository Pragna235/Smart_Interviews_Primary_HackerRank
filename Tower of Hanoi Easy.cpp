#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int c=0;
void solve(int n, char src, char dest, char temp){
   

   
    //cout<<"Move "<<a<<" from "<<src<<" to "<<dest<<endl;
        if(n==0)
    return;
   
   
   
        solve(n-1,src,temp,dest);
        cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
        solve(n-1,temp,dest,src);
   
}
void solve1(int n, char src, char dest, char temp){
   

   
    //cout<<"Move "<<a<<" from "<<src<<" to "<<dest<<endl;
        if(n==0)
    return ;
   
    //c can be calculated using (2**n)-1
   
        solve1(n-1,src,temp,dest);
       
        solve1(n-1,temp,dest,src);
    c++;
   
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       solve1(n,'A','B','C');
        cout<<c<<endl;
       
        solve(n,'A','C','B');
        c=0;
   
       
       
    }
    return 0;
}




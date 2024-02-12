#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> hp;
class MinHeap{
    public :
    int getMin(){
        return hp[0];
    }
    void insert(int x){
        hp.push_back(x);
        int idx = hp.size()-1;
        while(idx!=0 && hp[idx]<hp[(idx-1)/2]){
            swap(hp[idx],hp[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    void delMin(){
       hp[0] = hp[hp.size()-1];
        hp.pop_back();
        int p = 0;
        int n = hp.size();
        int minindex=0;
        while((2*p+1)<n || (2*p+2)<n){
           minindex = p;

    if(hp[minindex] > hp[2*p+1]){
        minindex = 2*p+1;
    }
    if((2*p+2) < n && hp[minindex] > hp[2*p+2]){
        minindex = 2*p+2;
    }
    if(p == minindex){
        return ;
    }
    swap(hp[p],hp[minindex]);
    p = minindex;
    }
}
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        MinHeap mn;
        int x;
        string s;
        cin>>s;
        if(s=="insert"){
            cin>>x;
            mn.insert(x);
        }
        else if(s=="getMin"){
            if(hp.size()!=0)
                cout<<hp[0]<<endl;
            else
                cout<<"Empty"<<endl;
        }
        else if(s=="delMin"){
            if(hp.size()!=0)
                mn.delMin();
        }
    }
    return 0;
}


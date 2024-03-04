#include <bits/stdc++.h>
using namespace std;
bool isSquareMatrix(vector<int> &a)
{
    vector<int> flag(9,0);
    for(int i=0;i<9;i++){
        flag[a[i]-1]=1;
    }
    for(int i=0;i<9;i++){
        if(flag[i] != 1){
            return false;
        }
    }
    int r1=a[0]+a[1]+a[2];
    int r2=a[3]+a[4]+a[5];
    int r3=a[6]+a[7]+a[8];
    int c1=a[0]+a[3]+a[6];
    int c2=a[1]+a[4]+a[7];
    int c3=a[2]+a[5]+a[8];
    int d1=a[0]+a[4]+a[8];
    int d2=a[2]+a[4]+a[6];
    if(r1%5 != 0 || r2%5 != 0 || r3%5 != 0 || c1%5 != 0 || c2%5 != 0 || c3%5 != 0 || d1%5 != 0 || d2%5 != 0)
        return false;
    return true;
}
void Permutations(int id,int end,int n,vector<vector<int>> &sm,vector<int> &temp)
{
    if(id==end){
        if(isSquareMatrix(temp))
            sm.push_back(temp);
    }
    for(int i=id;i<=8;i++){
        swap(temp[id],temp[i]);
        Permutations(id+1,end,n,sm,temp);
        swap(temp[id],temp[i]);
    }
}
void findMatrixes(vector<vector<int>> &sm)
{
    vector<int> temp;
    for(int i=1;i<=9;i++)
        temp.push_back(i);
    Permutations(0,8,9,sm,temp);
}
int Cost(int v[],vector<int> v1)
{
    int cost=0;
    for(int i=0;i<9;i++){
        cost+=abs(v1[i]-v[i]);
    }
    return cost;
}
int minimumCost(int v[], vector<vector<int>> &sm)
{
    int cost=INT_MAX;
    for(auto &i : sm){
        int x=Cost(v,i);
        if(x < cost){
            cost=x;
        }
    }
    return cost;
}
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> sm;
    findMatrixes(sm);
    while(t--){
        int v[9];
        for(int i=0;i<9;i++){
            cin>>v[i];
        }
         cout << minimumCost(v,sm) << endl;
    }
    return 0;
}

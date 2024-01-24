#include<bits/stdc++/h>
using namespace std;

int main(){
  int t;
cin>>t;
while(t--){
string str;
cin>>str;
int n= str.size();
bool b = true;
set<char> st;
for(int i=0;i<n;i++){
if(st.find(str[i])!=st.end()){
cout<<str[i[<<endl;
b=false;
break;
}
else st.insert(str[i]);
}

if(b) cout<<"."<<endl;
}
return 0;
}

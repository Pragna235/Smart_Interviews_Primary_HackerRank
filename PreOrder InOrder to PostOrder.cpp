#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val):data(val),left(nullptr),right(nullptr) {}
};
Node* buildTree(vector<int>& pre,vector<int>& in,int ps,int pe,int is,int ie, unordered_map<int, int>& inMap) {
    if (ps>pe||is>ie) {
        return nullptr;
    }
    int rootval=pre[ps];
    Node* root=new Node(rootval);
    int rootidxin=inMap[rootval];
    int leftsub=rootidxin-is;
    root->left=buildTree(pre,in,ps+1,ps+leftsub,is,rootidxin-1,inMap);
    root->right=buildTree(pre,in, ps+leftsub+1,pe,rootidxin+1,ie,inMap);
    return root;
}
void postOrder(Node* root) {
    if (root==nullptr) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> pre(n);
        vector<int> in(n);
        for (int i=0;i<n;i++) {
            cin>>pre[i];
        }
        for (int i=0; i<n;i++) {
            cin>>in[i];
        }
        unordered_map<int,int> inOrderMap;
        for (int i=0;i<n;i++) {
            inOrderMap[in[i]]=i;
        }
        Node *root=buildTree(pre,in, 0,n-1,0,n-1,inOrderMap);
        postOrder(root);
        cout<<endl;
    }
    return 0;
}

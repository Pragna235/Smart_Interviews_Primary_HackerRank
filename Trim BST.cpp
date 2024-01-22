#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
Node* insert(Node* root, int val) {
    if (root == nullptr)
        return new Node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}
void tAP(Node* root, int l, int r) {
    if (root == nullptr)
        return;
    if (root->data >= l && root->data <= r)
        cout << root->data << " ";
    if (root->data > l)
        tAP(root->left, l, r);
    if (root->data < r)
        tAP(root->right, l, r);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        Node* root = nullptr;
        for (int i=0;i <n;i++)
            root = insert(root, v[i]);
        tAP(root,l,r);
        cout<<endl;
    }
    return 0;
}

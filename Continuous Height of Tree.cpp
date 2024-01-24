#include <bits/stdc++.h>
using namespace std;

class Node {
public:
 int data;
 int depth;
 Node* left;
 Node* right;
 
 Node(int data) {
 this->data = data;
 this->depth = 0;
 left = right = NULL;
 }
};

Node* insert(Node* root, int x, int& maxHeight) {
 if (root == NULL) {
 Node* nn = new Node(x);
 return nn;
 }
 if (x < root->data) {
 root->left = insert(root->left, x, maxHeight);
 } else {
root->right = insert(root->right, x, maxHeight);
 }
 root->depth = 1 + max((root->left ? root->left->depth : -
1), (root->right ? root->right->depth : -1));
 maxHeight = max(maxHeight, root->depth);
 return root;
}
int main() {
 int t;
 cin >> t;
 while (t--) {
 int n;
 cin >> n;
 Node* root = NULL;
 int arr[n];
 int maxHeight = 0;
 for (int i = 0; i < n; i++) {
 cin >> arr[i];
 root = insert(root, arr[i], maxHeight);
 cout << maxHeight << " ";
 }
 cout << endl;
 }
 return 0;
}


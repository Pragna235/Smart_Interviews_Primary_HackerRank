#include <bits/stdc++.h>
using namespace std;
 
struct TreeNode {
    int val;
    TreeNode* left,*right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
TreeNode* insert(TreeNode* root,int s) {
    if (root == NULL) {
        return new TreeNode(s);
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!(q.empty())) {
        TreeNode* curr = q.front();
        q.pop();
        if(curr->left != NULL) q.push(curr->left);
        else{ curr->left = new TreeNode(s); return root;
            }
        if(curr->right != NULL) q.push(curr->right);
        else{ curr->right = new TreeNode(s); return root;
            }
    }
    return root;
}
bool isBST(TreeNode* root,int mi,int M){
    if(root == NULL) return true;
    return (root->val >= mi && root->val <= M) && (isBST(root->left,mi,root->val - 1)) && (isBST(root->right,root->val +1,M));
}

int main() {

    int test;
    cin>>test;
    while(test--){
        int size;
        cin>>size;
        TreeNode* root =NULL;
        for(int i=0;i<size;i++){
           int k;cin>>k;
           root=insert(root,k);
        }
        if(isBST(root,INT_MIN,INT_MAX))
           cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }


    return 0;
}

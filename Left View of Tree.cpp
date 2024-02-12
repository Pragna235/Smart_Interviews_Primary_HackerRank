#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
};
Node* getNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Node* levelTraversal(Node* root,int data){
    if(root==NULL){
        root=getNode(data);
        return root;
    }
    if(data<root->data){
        root->left=levelTraversal(root->left,data);
    }
    else{
        root->right=levelTraversal(root->right,data);
    }
    return root;
}
Node* bulidBST(int arr[],int n){
    if(n==0){
        return NULL;
    }
    Node* root=NULL;
    for(int i=0;i<n;i++){
        root=levelTraversal(root,arr[i]);
    }
    return root;
}
void printLeftView(Node* root)
{
    if (!root)
        return;
 
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty())
    {    
        int n = q.size();
        for(int i = 1; i <= n; i++)
        {
            Node* temp = q.front();
            q.pop();
            if (i == 1)
                cout<<temp->data<<" ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}    
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Node* root=bulidBST(arr,n);
        printLeftView(root);
        cout<<endl;
    }
   
    return 0;
}

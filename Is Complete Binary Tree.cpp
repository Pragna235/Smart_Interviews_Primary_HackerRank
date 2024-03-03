#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    struct Node * left;
    struct Node * right;
};

struct Node * newNode(int val){
    struct Node * obj = (struct Node *)malloc(sizeof(struct Node));
    obj->val = val;
    obj->left = NULL;
    obj->right = NULL;
    return obj;
}

struct Node * insert(struct Node * node, int val){
    struct Node * obj = newNode(val);
    if(node == NULL)
        return obj;
    struct Node * temp = node;
    struct Node * prev = node;
    while(temp != NULL){
        prev = temp;
        if (val > temp->val){
            temp = temp->right;
        }
        else{
            temp = temp->left;
        }
    }
    if(val > prev->val)
        prev-> right = obj;
    else
        prev->left = obj;

    return node;
}

bool isCompleteTree(struct Node * root){
    queue <struct Node *> q;
    q.push(root);
    bool flag = false;

    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        if(temp->left != NULL){
            if (flag)
                return false;
            q.push(temp->left);
        }
        else
            flag = true;
        if (temp->right != NULL){
             if (flag)
                return false;
            q.push(temp->right);
        }
        else
            flag = true;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);

    int i = 0;
    for(i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        int * arr = (int *)malloc(sizeof(int)*n);
        int j = 0;
        struct Node * node = NULL;
        for(j = 0; j < n; j++){
            scanf("%d", &arr[j]);
            node = insert(node, arr[j]);
        }
        if(isCompleteTree(node))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

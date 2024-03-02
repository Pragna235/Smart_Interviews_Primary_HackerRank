#include <bits/stdc++.h>
#include <algorithm>

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

struct Node * insert(struct Node * &node, int val){
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

int maxA(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int getHeight(struct Node * &root, int &ans){

    if (root == NULL)
        return 0;
    int left = getHeight(root->left, ans);
    int right = getHeight(root->right, ans);
    ans = maxA(ans, 1 + left+right);

    return (1 + maxA(left, right)) ;
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
        int ans = 0;
        getHeight(node, ans);
        printf("%d\n", ans);
    }
    return 0;
}

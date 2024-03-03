#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


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

struct Node * lca(struct Node * root, int u, int v){
    if(root == NULL || root->val ==  u || root->val == v)
        return root;

    struct Node * left = lca(root->left, u, v);
    struct Node * right = lca(root->right, u, v);

    if(left == NULL)
        return right;
    if(right == NULL)
        return left;
    return root;
}

int main() {
    int t;
    scanf("%d", &t);

    int i = 0;
    for(i = 0; i < t; i++){
        int n, q;
        scanf("%d", &n);
        scanf("%d", &q);
        int * arr = (int *)malloc(sizeof(int)*n);
        int j = 0;
        struct Node * node = NULL;
        for(j = 0; j < n; j++){
            scanf("%d", &arr[j]);
            node = insert(node, arr[j]);
        }
        for(j = 0; j < q; j++){
            int u, v;
            scanf("%d", &u);
            scanf("%d", &v);
            printf("%d ", lca(node, u, v)->val);
        }
        printf("\n");
    }
    return 0;
}

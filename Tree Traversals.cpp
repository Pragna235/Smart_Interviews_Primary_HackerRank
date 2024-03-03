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

    void preOrder(struct Node * root){
        if (root == NULL)
            return;

        printf("%d ", root->val);
        preOrder(root->left);
        preOrder(root->right);
    }

void inOrder(struct Node * root){
    if (root == NULL)
        return;

    inOrder(root->left);
    printf("%d ", root->val);
    inOrder(root->right);
}

void postOrder(struct Node * root){
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->val);
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
        preOrder(node);
        printf("\n");
        inOrder(node);
        printf("\n");
        postOrder(node);
        printf("\n\n");
    }
    return 0;
}

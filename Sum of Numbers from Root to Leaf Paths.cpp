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

long long int getNumberOfDigits(int num){
    long long int res = 10;
    while(num/10 != 0){
        res*=10;
        num=num/10;
    }
    return res;
}

unsigned long long int getSum(struct Node * root, unsigned long long int  temp){
    if (root == NULL)
        return 0;
    long long int digits = getNumberOfDigits(root->val);
   temp = (temp*digits + (root->val))%1000000007;
    if (root ->right == NULL && root->left == NULL)
        return temp;
    return ((getSum(root->left, temp) +
        getSum(root->right, temp))%1000000007);
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
       printf("%llu\n", getSum(node, 0));
    }
    return 0;
}

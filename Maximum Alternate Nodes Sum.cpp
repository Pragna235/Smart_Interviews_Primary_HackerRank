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

pair<int, int> getMax(struct Node * root){
    if(root == NULL ){
        pair<int, int> sum(0,0);
        return sum;
    }
    pair<int, int> suml = getMax(root->left);
    pair<int, int> sumr = getMax(root->right);
    pair<int, int> sum;

    sum.first = suml.second + sumr.second + root->val;

    sum.second = max(suml.first, suml.second) + max(sumr.first, sumr.second);
    return sum;
}

int getMaxSum(struct Node * root){
    if (root == NULL)
        return 0;

    pair<int, int> sum = getMax(root);
    return max(sum.first, sum.second);
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
        printf("%d\n", getMaxSum(node));
    }
    return 0;
}

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node {
    int val;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int val) {
    struct Node* obj = (struct Node*)malloc(sizeof(struct Node));
    obj->val = val;
    obj->left = NULL;
    obj->right = NULL;
    return obj;
}

struct Node* insert(struct Node* node, int val) {
    struct Node* obj = newNode(val);
    if (node == NULL)
        return obj;
    struct Node* temp = node;
    struct Node* prev = node;
    while (temp != NULL) {
        prev = temp;
        if (val > temp->val) {
            temp = temp->right;
        }
        else {
            temp = temp->left;
        }
    }
    if (val > prev->val)
        prev->right = obj;
    else
        prev->left = obj;

    return node;
}

void reverseQueue(queue<struct Node*>& Queue)
{
    stack<struct Node*> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}

void printLevel(struct Node* root) {
    if (root == NULL)
        return;
    queue<struct Node*> q;
    q.push(root);
    bool isodd = true;
    while (!q.empty()) {
        int qsize = q.size(); // calculating earlier because if used in for loop directly the value
        if (isodd) {        // changes dynamically.
            reverseQueue(q);
            for (int i = 0; i < qsize; i++) {
                struct Node* temp = q.front();
                q.pop();
                cout << temp->val << " ";
                if (temp->right)
                    q.push(temp->right);
                if (temp->left)
                    q.push(temp->left);
            }
            isodd = false;
            reverseQueue(q);
        }
        else {
            for (int i = 0; i < qsize; i++) {
                struct Node* temp = q.front();
                q.pop();
                cout << temp->val << " ";
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            isodd = true;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    int i = 0;
    for (i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int* arr = (int*)malloc(sizeof(int) * n);
        int j = 0;
        struct Node* node = NULL;
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            node = insert(node, arr[j]);
        }
        printLevel(node);
        printf("\n");
    }
    return 0;
}

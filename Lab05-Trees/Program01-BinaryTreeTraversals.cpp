#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

void preorder(Node* r) {
    if (!r) return;
    cout << r->data << " ";
    preorder(r->left);
    preorder(r->right);
}

void postorder(Node* r) {
    if (!r) return;
    postorder(r->left);
    postorder(r->right);
    cout << r->data << " ";
}

void iterativeInorder(Node* r) {
    stack<Node*> s;
    while (r || !s.empty()) {
        while (r) {
            s.push(r);
            r = r->left;
        }
        r = s.top();
        s.pop();
        cout << r->data << " ";
        r = r->right;
    }
}

void levelOrder(Node* r) {
    if (!r) return;
    queue<Node*> q;
    q.push(r);
    while (!q.empty()) {
        Node* t = q.front();
        q.pop();
        cout << t->data << " ";
        if (t->left) q.push(t->left);
        if (t->right) q.push(t->right);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Recursive Inorder: ";
    inorder(root);

    cout << "\nRecursive Preorder: ";
    preorder(root);

    cout << "\nRecursive Postorder: ";
    postorder(root);

    cout << "\nIterative Inorder: ";
    iterativeInorder(root);

    cout << "\nLevel Order: ";
    levelOrder(root);
}

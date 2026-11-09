#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    bool lthread, rthread;
};

Node* insert(Node* root, int x) {
    Node* p = root;
    Node* parent = NULL;

    while (p) {
        if (x == p->data) return root;
        parent = p;

        if (x < p->data) {
            if (!p->lthread) p = p->left;
            else break;
        } else {
            if (!p->rthread) p = p->right;
            else break;
        }
    }

    Node* n = new Node{x, NULL, NULL, true, true};

    if (!parent) root = n;
    else if (x < parent->data) {
        n->left = parent->left;
        n->right = parent;
        parent->lthread = false;
        parent->left = n;
    } else {
        n->right = parent->right;
        n->left = parent;
        parent->rthread = false;
        parent->right = n;
    }

    return root;
}

Node* leftMost(Node* p) {
    if (!p) return NULL;
    while (!p->lthread) p = p->left;
    return p;
}

void inorder(Node* root) {
    Node* p = leftMost(root);

    while (p) {
        cout << p->data << " ";

        if (p->rthread) p = p->right;
        else p = leftMost(p->right);
    }
}

int main() {
    Node* root = NULL;

    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);

    cout << "Threaded Binary Tree: ";
    inorder(root);
}

#include <iostream>
using namespace std;

struct Node {
    int data, height;
    Node *left, *right;

    Node(int x) {
        data = x;
        height = 1;
        left = right = NULL;
    }
};

int height(Node* n) {
    return n ? n->height : 0;
}

int balance(Node* n) {
    return n ? height(n->left) - height(n->right) : 0;
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* t = x->right;

    x->right = y;
    y->left = t;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* t = y->left;

    y->left = x;
    x->right = t;

    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));

    return y;
}

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);

    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    else return r;

    r->height = 1 + max(height(r->left), height(r->right));

    int b = balance(r);

    if (b > 1 && x < r->left->data)
        return rightRotate(r);

    if (b < -1 && x > r->right->data)
        return leftRotate(r);

    if (b > 1 && x > r->left->data) {
        r->left = leftRotate(r->left);
        return rightRotate(r);
    }

    if (b < -1 && x < r->right->data) {
        r->right = rightRotate(r->right);
        return leftRotate(r);
    }

    return r;
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 25);
    root = insert(root, 40);

    cout << "AVL Tree: ";
    inorder(root);
}

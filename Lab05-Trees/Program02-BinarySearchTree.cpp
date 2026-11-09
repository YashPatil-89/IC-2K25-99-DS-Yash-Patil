#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

bool search(Node* r, int x) {
    if (!r) return false;
    if (r->data == x) return true;
    return x < r->data ? search(r->left, x) : search(r->right, x);
}

Node* findMin(Node* r) {
    while (r && r->left) r = r->left;
    return r;
}

Node* findMax(Node* r) {
    while (r && r->right) r = r->right;
    return r;
}

Node* removeNode(Node* r, int x) {
    if (!r) return r;

    if (x < r->data) r->left = removeNode(r->left, x);
    else if (x > r->data) r->right = removeNode(r->right, x);
    else {
        if (!r->left) return r->right;
        if (!r->right) return r->left;

        Node* t = findMin(r->right);
        r->data = t->data;
        r->right = removeNode(r->right, t->data);
    }
    return r;
}

bool validate(Node* r, long long min, long long max) {
    if (!r) return true;
    if (r->data <= min || r->data >= max) return false;
    return validate(r->left, min, r->data) &&
           validate(r->right, r->data, max);
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    cout << "BST: ";
    inorder(root);

    cout << "\nSearch 40: " << search(root, 40);
    cout << "\nMinimum: " << findMin(root)->data;
    cout << "\nMaximum: " << findMax(root)->data;

    root = removeNode(root, 30);

    cout << "\nAfter Deletion: ";
    inorder(root);

    cout << "\nValid BST: "
         << validate(root, -999999, 999999);
}

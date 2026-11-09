# Lab 05: Trees

## Program 1: Binary Tree Traversals

### a. Problem Statement
Implement recursive and iterative tree traversals: Inorder, Preorder, Postorder, and Level Order.

### b. Approach
Use recursion for three traversals, a stack for iterative Inorder, and a queue for Level Order traversal.

### c. Time and Space Complexity
- All traversals: O(n)
- Recursive/iterative auxiliary space: O(h)
- Level Order auxiliary space: O(w)

### d. Sample Input and Output
```text
Tree: 1, 2, 3, 4, 5

Inorder: 4 2 5 1 3
Preorder: 1 2 4 5 3
Postorder: 4 5 2 3 1
Iterative Inorder: 4 2 5 1 3
Level Order: 1 2 3 4 5
```

### e. Learning Outcomes
Understanding binary trees and different traversal techniques.

---

## Program 2: Binary Search Tree (BST)

### a. Problem Statement
Implement BST operations including insertion, searching, minimum, maximum, deletion, and validation.

### b. Approach
Use recursive insertion and searching while maintaining the BST property. Delete nodes using the inorder successor.

### c. Time and Space Complexity
- Operations: O(h)
- Validation and Inorder: O(n)
- Space: O(h) auxiliary recursion space

### d. Sample Input and Output
```text
BST: 20 30 40 50 70
Search 40: 1
Minimum: 20
Maximum: 70
After Deletion: 20 40 50 70
Valid BST: 1
```

### e. Learning Outcomes
Understanding BST properties and its fundamental operations.

---

## Program 3: AVL Tree

### a. Problem Statement
Implement an AVL tree with automatic balancing during insertion.

### b. Approach
Calculate node heights and balance factors. Apply LL, RR, LR, and RL rotations whenever required.

### c. Time and Space Complexity
- Insertion: O(log n)
- Inorder: O(n)
- Space: O(log n) auxiliary recursion space

### d. Sample Input and Output
```text
AVL Tree: 10 20 25 30 40
```

### e. Learning Outcomes
Understanding self-balancing trees, balance factors, and rotations.

---

## Program 4: Threaded Binary Tree

### a. Problem Statement
Implement a threaded binary search tree and perform inorder traversal.

### b. Approach
Use left and right threads to connect nodes to their inorder predecessor and successor, allowing traversal without recursion or a stack.

### c. Time and Space Complexity
- Insertion: O(h)
- Inorder Traversal: O(n)
- Traversal Auxiliary Space: O(1)

### d. Sample Input and Output
```text
Threaded Binary Tree: 5 10 15 20 30
```

### e. Learning Outcomes
Understanding threaded binary trees and stack-free inorder traversal.

---

## Conclusion
This lab covers binary tree traversals, BST operations, AVL balancing, and threaded binary trees.

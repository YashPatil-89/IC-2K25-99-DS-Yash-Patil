# Lab 03: Linked Lists

This directory contains four C++ programs implementing different types of linked lists and their operations.

---

## Program 1: Singly Linked List

### a. Problem Statement

Write a menu-driven C++ program to implement a Singly Linked List using structures and classes.

The program performs the following operations:

1. Insert a node at a specified position.
2. Delete a node from a specified position.
3. Reverse the linked list.
4. Concatenate two linked lists.
5. Display the linked list.
6. Display the second linked list.
7. Exit the program.

### b. Approach

1. Define a `Node` structure containing data and a pointer to the next node.
2. Create a `SinglyLinkedList` class with a head pointer.
3. Implement insertion by creating a new node and adjusting pointers.
4. Implement deletion by locating the node and updating links.
5. Reverse the list by changing the direction of pointers using `prev`, `curr` and `next`.
6. Concatenate two lists by connecting the last node of the first list to the head of the second list.
7. Display elements by traversing the list until `NULL` is reached.
8. Use a menu-driven `do-while` loop and `switch` statement to perform operations.

### c. Time and Space Complexity Analysis

Let `n` be the number of nodes in the first list and `m` be the number of nodes in the second list.

| Operation | Time Complexity |
|---|---|
| Insertion | O(n) |
| Deletion | O(n) |
| Reversal | O(n) |
| Concatenation | O(n + m) |
| Display | O(n) |

**Space Complexity:** O(n) for storing the linked list.

**Auxiliary Space:** O(1) for individual operations.

### d. Sample Input and Output

**Sample Input:**
```text
--- SINGLY LINKED LIST MENU ---
1. Insert at Position
2. Delete at Position
3. Reverse List
4. Concatenate Two Lists
5. Display List
6. Display Second List
7. Exit

Enter your choice: 1
Enter value: 10
Enter position: 1
```

**Sample Output:**
```text
Enter your choice: 1
Enter value: 20
Enter position: 2
Node inserted successfully!

Enter your choice: 5
Linked List: 10 -> 20 -> NULL

Enter your choice: 3
List reversed successfully!

Enter your choice: 5
Linked List: 20 -> 10 -> NULL

Enter your choice: 7
Exiting program...
```

### f. Learning Outcomes

1. Understood the structure and working of a Singly Linked List.
2. Learned dynamic memory allocation using `new` and `delete`.
3. Practiced insertion and deletion at specific positions.
4. Learned pointer manipulation to reverse a linked list.
5. Understood concatenation of two linked lists.
6. Practiced classes, structures and destructors in C++.

---

## Program 2: Doubly Linked List

### a. Problem Statement

Write a menu-driven C++ program to implement a Doubly Linked List using structures and classes.

The program performs the following operations:

1. Insert a node at a specified position.
2. Delete a node from a specified position.
3. Reverse the linked list.
4. Concatenate two doubly linked lists.
5. Display the list in forward direction.
6. Display the list in backward direction.
7. Display the second list.
8. Exit the program.

### b. Approach

1. Define a `Node` structure containing data, a pointer to the previous node and a pointer to the next node.
2. Create a `DoublyLinkedList` class with a head pointer.
3. Implement insertion by updating both `prev` and `next` pointers.
4. Implement deletion by adjusting the links of adjacent nodes.
5. Reverse the list by swapping the previous and next pointers of every node.
6. Concatenate two lists by connecting the last node of the first list to the head of the second list.
7. Display the list in forward direction by traversing through `next`.
8. Display the list in backward direction by first reaching the last node and traversing through `prev`.
9. Use a menu-driven `do-while` loop and `switch` statement.

### c. Time and Space Complexity Analysis

Let `n` be the number of nodes in the first list and `m` be the number of nodes in the second list.

| Operation | Time Complexity |
|---|---|
| Insertion | O(n) |
| Deletion | O(n) |
| Reversal | O(n) |
| Concatenation | O(n + m) |
| Forward Display | O(n) |
| Backward Display | O(n) |

**Space Complexity:** O(n) for storing the linked list.

**Auxiliary Space:** O(1) for individual operations.

### d. Sample Input and Output

**Sample Input:**
```text
--- DOUBLY LINKED LIST MENU ---
1. Insert at Position
2. Delete at Position
3. Reverse List
4. Concatenate Two Lists
5. Display Forward
6. Display Backward
7. Display Second List
8. Exit

Enter your choice: 1
Enter value: 10
Enter position: 1
```

**Sample Output:**
```text
Node inserted successfully!

Enter your choice: 1
Enter value: 20
Enter position: 2
Node inserted successfully!

Enter your choice: 5
Forward List: 10 <-> 20 <-> NULL

Enter your choice: 6
Backward List: 20 <-> 10 <-> NULL

Enter your choice: 8
Exiting program...
```

### f. Learning Outcomes

1. Understood the structure and working of a Doubly Linked List.
2. Learned the use of two pointers in each node.
3. Practiced insertion and deletion using bidirectional links.
4. Learned to reverse a doubly linked list.
5. Understood forward and backward traversal.
6. Practiced concatenation of doubly linked lists.
7. Improved understanding of dynamic memory management.

---

## Program 3: Circular Linked List

### a. Problem Statement

Write a menu-driven C++ program to implement a Circular Linked List using structures and classes.

The program performs the following operations:

1. Insert a node at a specified position.
2. Delete a node from a specified position.
3. Reverse the circular linked list.
4. Concatenate two circular linked lists.
5. Display the linked list.
6. Display the second linked list.
7. Exit the program.

### b. Approach

1. Define a `Node` structure containing data and a pointer to the next node.
2. Create a `CircularLinkedList` class with a head pointer.
3. Ensure that the last node always points back to the head node.
4. Implement insertion by adjusting pointers while maintaining the circular structure.
5. Implement deletion by updating links and handling the deletion of the head node separately.
6. Reverse the list by changing the direction of links while maintaining the circular connection.
7. Concatenate two lists by connecting the last node of the first list to the head of the second list and the last node of the second list back to the original head.
8. Display elements using a `do-while` loop until traversal reaches the head again.
9. Use a menu-driven `do-while` loop and `switch` statement.

### c. Time and Space Complexity Analysis

Let `n` be the number of nodes in the first list and `m` be the number of nodes in the second list.

| Operation | Time Complexity |
|---|---|
| Insertion | O(n) |
| Deletion | O(n) |
| Reversal | O(n) |
| Concatenation | O(n + m) |
| Display | O(n) |

**Space Complexity:** O(n) for storing the linked list.

**Auxiliary Space:** O(1) for individual operations.

### d. Sample Input and Output

**Sample Input:**
```text
--- CIRCULAR LINKED LIST MENU ---
1. Insert at Position
2. Delete at Position
3. Reverse List
4. Concatenate Two Lists
5. Display List
6. Display Second List
7. Exit

Enter your choice: 1
Enter value: 10
Enter position: 1
```

**Sample Output:**
```text
Node inserted successfully!

Enter your choice: 1
Enter value: 20
Enter position: 2
Node inserted successfully!

Enter your choice: 5
Circular Linked List: 10 -> 20 -> (Back to Head)

Enter your choice: 3
List reversed successfully!

Enter your choice: 5
Circular Linked List: 20 -> 10 -> (Back to Head)

Enter your choice: 7
Exiting program...
```

### f. Learning Outcomes

1. Understood the structure and working of a Circular Linked List.
2. Learned how the last node connects back to the head.
3. Practiced insertion and deletion in circular structures.
4. Learned to reverse a circular linked list.
5. Understood concatenation of two circular linked lists.
6. Practiced circular traversal using a `do-while` loop.
7. Understood the importance of maintaining circular connections.

---

## Program 4: Polynomial Addition Using Linked List

### a. Problem Statement

Write a menu-driven C++ program to represent and add two polynomials using a Singly Linked List.

Each node stores the coefficient, exponent and pointer to the next node.

The program performs the following operations:

1. Create the first polynomial.
2. Create the second polynomial.
3. Display the first polynomial.
4. Display the second polynomial.
5. Add the two polynomials.
6. Display the resultant polynomial.
7. Exit the program.

### b. Approach

1. Define a `Node` structure containing coefficient, exponent and next pointer.
2. Create a `Polynomial` class with a head pointer.
3. Implement the `insertTerm()` function to insert terms in descending order of exponents.
4. If a term with the same exponent already exists, combine their coefficients.
5. Remove terms whose resulting coefficient becomes zero.
6. Create polynomials by accepting the number of terms, coefficients and exponents.
7. Display polynomials in mathematical notation.
8. Add two polynomials by comparing their exponents.
9. If exponents are equal, add their coefficients.
10. If exponents are different, insert the term with the larger exponent into the resultant polynomial.
11. Insert any remaining terms into the result.
12. Display the resultant polynomial.

### c. Time and Space Complexity Analysis

Let:
- `m` = Number of terms in the first polynomial.
- `n` = Number of terms in the second polynomial.
- `k` = Number of terms in the resultant polynomial.

| Operation | Time Complexity |
|---|---|
| Insert Term | O(n) |
| Create Polynomial | O(n²) |
| Display Polynomial | O(n) |
| Add Two Polynomials | O(m + n) |

**Space Complexity:** O(m + n) for storing the two input polynomials and the resultant polynomial.

**Auxiliary Space:** O(m + n) for the resultant polynomial.

### d. Sample Input and Output

**Sample Input:**
```text
--- POLYNOMIAL OPERATIONS ---
1. Create First Polynomial
2. Create Second Polynomial
3. Display First Polynomial
4. Display Second Polynomial
5. Add Two Polynomials
6. Display Resultant Polynomial
7. Exit

Enter your choice: 1

Enter First Polynomial:
Enter number of terms: 3
Enter coefficient: 5
Enter exponent: 2
Enter coefficient: 4
Enter exponent: 1
Enter coefficient: 3
Enter exponent: 0

Enter your choice: 2

Enter Second Polynomial:
Enter number of terms: 3
Enter coefficient: 3
Enter exponent: 2
Enter coefficient: 2
Enter exponent: 1
Enter coefficient: 1
Enter exponent: 0
```

**Sample Output:**
```text
Enter your choice: 3
First Polynomial: 5x^2 + 4x + 3

Enter your choice: 4
Second Polynomial: 3x^2 + 2x + 1

Enter your choice: 5
Polynomials added successfully!

Enter your choice: 6
Resultant Polynomial: 8x^2 + 6x + 4

Enter your choice: 7
Exiting program...
```

### f. Learning Outcomes

1. Understood the application of linked lists in polynomial representation.
2. Learned to store coefficients and exponents in nodes.
3. Practiced insertion of polynomial terms in descending order.
4. Learned to combine terms having the same exponent.
5. Understood polynomial addition using linked lists.
6. Practiced handling zero coefficients.
7. Improved understanding of classes, pointers and dynamic memory allocation.
8. Learned the use of move constructors and deleted copy operations in C++.

---

## Conclusion

This lab demonstrates the implementation and applications of different types of linked lists in C++.

The programs provide practical understanding of Singly Linked Lists, Doubly Linked Lists, Circular Linked Lists and Polynomial Addition using Linked Lists.

Through these implementations, concepts such as dynamic memory allocation, pointer manipulation, traversal, insertion, deletion, reversal, concatenation and polynomial operations are explored.

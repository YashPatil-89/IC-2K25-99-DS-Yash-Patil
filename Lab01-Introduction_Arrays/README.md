
# Array Operations Using C++

## a. Problem Statement

Write a C++ program to perform basic array operations using a menu-driven approach.

The program supports the following operations:

1. Display array elements.
2. Insert an element at a specified position.
3. Delete an element from a specified position.
4. Search for an element in the array.
5. Exit the program.

The array has a maximum capacity of 100 elements.

## b. Approach

The program uses a one-dimensional integer array and implements a menu-driven approach using a `do-while` loop and `switch` statement.

### Algorithm

1. Declare an integer array of size 100.
2. Accept the initial size and elements from the user.
3. Display the menu of available operations.
4. Accept the user's choice.
5. Perform the selected operation.
6. Repeat until the user selects Exit.

### Operations

- **Display:** Traverse and print all array elements.
- **Insertion:** Shift elements to the right and insert the new element at the specified position.
- **Deletion:** Remove an element and shift the remaining elements to the left.
- **Searching:** Use linear search to find the required element.
- **Exit:** Terminate the program.

## c. Time and Space Complexity

Let `n` be the number of elements in the array.

| Operation | Time Complexity |
|---|---|
| Display | O(n) |
| Insertion | O(n) |
| Deletion | O(n) |
| Searching | O(n) |
| Exit | O(1) |

**Space Complexity:**
- Auxiliary Space: O(1)
- Array Storage: O(100) (Fixed Size)

## d. Sample Input and Output

### Sample Input
```text
Enter size of array: 5
Enter array elements: 10 20 30 40 50
```

### Sample Output
```text
Enter your choice: 1
Array elements are: 10 20 30 40 50

Enter your choice: 2
Enter position to insert: 3
Enter element: 25
Element inserted successfully

Enter your choice: 1
Array elements are: 10 20 25 30 40 50

Enter your choice: 3
Enter position to delete: 2
Element deleted successfully

Enter your choice: 1
Array elements are: 10 25 30 40 50

Enter your choice: 4
Enter element to search: 30
Element found at position 3

Enter your choice: 5
Exiting program...
```

## e. Screenshots

Add screenshots of program execution in a folder named `screenshots`.

1. Initial Array Input
2. Display Array
3. Insert Element
4. Delete Element
5. Search Element
6. Exit Program

## f. Learning Outcomes

1. Learned basic array manipulation.
2. Understood insertion and deletion operations.
3. Implemented linear searching.
4. Practiced `switch` statements and `do-while` loops.
5. Understood array traversal and element shifting.
6. Learned time and space complexity analysis.

## Conclusion

This program demonstrates basic array operations in C++ using a menu-driven approach. It provides practical understanding of array manipulation, insertion, deletion, and searching.

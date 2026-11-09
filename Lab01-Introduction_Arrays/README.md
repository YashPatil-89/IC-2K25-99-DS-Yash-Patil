# Program 1: Basic Array Operations

## a. Problem Statement

Write a C++ program to perform basic operations on a one-dimensional array using a menu-driven approach.

The program performs the following operations:

1. Display array elements.
2. Insert an element at a specified position.
3. Delete an element from a specified position.
4. Search for an element using linear search.
5. Exit the program.

The array has a maximum capacity of 100 elements.

## b. Approach

- Declare an integer array of size 100.
- Accept the initial size and elements from the user.
- Use a `do-while` loop to repeatedly display the menu.
- Use a `switch` statement to perform the selected operation.
- For insertion, shift elements to the right.
- For deletion, shift elements to the left.
- For searching, use linear search to find the element.
- Terminate the program when the user selects Exit.

## c. Time and Space Complexity Analysis

Let `n` represent the number of elements in the array.

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

**Sample Input:**
```text
Enter size of array: 5
Enter array elements: 10 20 30 40 50
```

**Sample Output:**
```text
Array elements are: 10 20 30 40 50

Enter position to insert: 3
Enter element: 25
Element inserted successfully

Array elements are: 10 20 25 30 40 50

Enter position to delete: 2
Element deleted successfully

Array elements are: 10 25 30 40 50

Enter element to search: 30
Element found at position 3

Exiting program...
```
## e. Learning Outcomes

1. Learned array declaration and initialization.
2. Understood insertion and deletion operations.
3. Implemented linear searching.
4. Practiced `switch` statements and `do-while` loops.
5. Understood element shifting in arrays.
6. Learned time and space complexity analysis.

---

# Program 2: Matrix Operations

## a. Problem Statement

Write a C++ program to perform basic operations on a two-dimensional matrix using a menu-driven approach.

The program performs the following operations:

1. Display Matrix.
2. Find Transpose of Matrix.
3. Calculate Row Sum.
4. Calculate Column Sum.
5. Exit the program.

The matrix has a maximum capacity of 20 × 20.

## b. Approach

- Declare a two-dimensional integer array of size 20 × 20.
- Accept the number of rows and columns.
- Validate the matrix dimensions.
- Input all matrix elements using nested loops.
- Use a `do-while` loop and `switch` statement to perform operations.
- Display the matrix by traversing its rows and columns.
- Find the transpose by interchanging rows and columns during traversal.
- Calculate row sums and column sums using nested loops.
- Exit when the user selects option 0.

## c. Time and Space Complexity Analysis

Let `r` represent the number of rows and `c` represent the number of columns.

| Operation | Time Complexity |
|---|---|
| Display Matrix | O(r × c) |
| Transpose | O(r × c) |
| Row Sum | O(r × c) |
| Column Sum | O(r × c) |

**Space Complexity:**
- Matrix Storage: O(20 × 20)
- Auxiliary Space: O(1)

## d. Sample Input and Output

**Sample Input:**
```text
Enter rows and columns: 2 3
Enter matrix elements:
1 2 3
4 5 6
```

**Sample Output:**
```text
MATRIX OPERATIONS-->

1. Display Matrix
2. Find Transpose
3. Row Sum
4. Column Sum
0. Exit

Matrix is:
1  2  3
4  5  6

Transpose Matrix:
1  4
2  5
3  6

Row 1 sum = 6
Row 2 sum = 15

Column 1 sum = 5
Column 2 sum = 7
Column 3 sum = 9

Program ended.
```
## e. Learning Outcomes

1. Learned two-dimensional array declaration and initialization.
2. Understood matrix traversal using nested loops.
3. Implemented matrix transpose.
4. Learned to calculate row and column sums.
5. Practiced menu-driven programming.
6. Understood matrix operation complexity.

---

# Program 3: Addition of Sparse Matrices Using Triplet Representation

## a. Problem Statement

Write a C++ program to add two matrices and represent the resulting matrix in triplet form (three-column representation).

The triplet representation stores only non-zero elements along with their row and column positions.

The first row stores:
- Number of rows.
- Number of columns.
- Total number of non-zero elements.

The remaining rows store:
- Row index.
- Column index.
- Non-zero element value.

## b. Approach

- Declare two matrices of size 10 × 10.
- Accept the number of rows and columns.
- Input elements of both matrices.
- Add corresponding elements of the two matrices.
- Check whether the resulting element is non-zero.
- Store only non-zero elements in the triplet representation.
- Store matrix dimensions and the total number of non-zero elements in the first row.
- Display the resulting triplet representation.

## c. Time and Space Complexity Analysis

Let `r` represent the number of rows and `c` represent the number of columns.

| Operation | Time Complexity |
|---|---|
| Input First Matrix | O(r × c) |
| Input Second Matrix | O(r × c) |
| Matrix Addition | O(r × c) |
| Triplet Conversion | O(r × c) |
| Display Triplet | O(k) |

Here, `k` represents the number of non-zero elements in the resulting matrix.

**Space Complexity:**
- Two Input Matrices: O(r × c)
- Triplet Representation: O(r × c) (Maximum storage requirement)
- Auxiliary Space: O(1)

## d. Sample Input and Output

**Sample Input:**
```text
Enter rows and columns: 2 3

Enter first matrix:
1 0 3
0 4 0

Enter second matrix:
2 0 -3
0 1 0
```

**Sample Output:**
```text
Result in Triple Form:
2 3 2
0 0 3
1 1 5
```

The first row represents the matrix dimensions (2 × 3) and the total number of non-zero elements (2).

The remaining rows represent the row index, column index and corresponding non-zero value.

## e. Learning Outcomes

1. Understood sparse matrix representation.
2. Learned triplet representation of matrices.
3. Implemented matrix addition.
4. Learned to store only non-zero elements.
5. Practiced nested loops and conditional statements.
6. Understood the importance of efficient matrix storage.

---

# Program 4: Matrix Calculator

## a. Problem Statement

Write a menu-driven C++ program to perform different mathematical operations on matrices.

The program supports the following operations:

1. Matrix Addition.
2. Matrix Multiplication.
3. Matrix Transpose.
4. Matrix Determinant.
5. Exit.

The determinant operation supports square matrices of order 1, 2 and 3.

## b. Approach

- Declare three two-dimensional arrays to store matrices and results.
- Use a `do-while` loop to display the menu.
- Use a `switch` statement to perform the selected operation.

**1. Matrix Addition**
- Accept the dimensions of two matrices.
- Input their elements.
- Add corresponding elements.
- Display the resultant matrix.

**2. Matrix Multiplication**
- Accept the dimensions of both matrices.
- Check whether the number of columns of the first matrix equals the number of rows of the second matrix.
- Multiply the matrices using three nested loops.
- Display the resultant matrix.

**3. Matrix Transpose**
- Accept matrix dimensions and elements.
- Interchange rows and columns during traversal.
- Display the transpose.

**4. Matrix Determinant**
- Accept the order of a square matrix (1 to 3).
- Calculate the determinant using the appropriate formula.
- Display the result.

**5. Exit**
- Terminate the program.

## c. Time and Space Complexity Analysis

Let `r` represent the number of rows, `c` the number of columns, and `c2` the number of columns in the second matrix.

| Operation | Time Complexity |
|---|---|
| Matrix Addition | O(r × c) |
| Matrix Multiplication | O(r × c × c2) |
| Matrix Transpose | O(r × c) |
| Determinant (1×1, 2×2, 3×3) | O(1) |
| Exit | O(1) |

**Space Complexity:**
- Three Matrix Arrays: O(10 × 10) each.
- Auxiliary Space: O(1).

## d. Sample Input and Output

**Sample Input:**
```text
--- MATRIX CALCULATOR ---

Enter choice: 1

Enter rows and columns: 2 2

Enter first matrix:
1 2
3 4

Enter second matrix:
5 6
7 8
```

**Sample Output:**
```text
Addition:
6 8
10 12
```

**Matrix Multiplication:**
```text
Multiplication:
19 22
43 50
```

**Transpose:**
```text
Transpose:
1 3
2 4
```

**Determinant:**
```text
Enter order of square matrix (1-3): 2

Enter matrix:
1 2
3 4

Determinant = -2
```

## e. Learning Outcomes

1. Learned different matrix operations in C++.
2. Implemented matrix addition and multiplication.
3. Understood matrix transpose.
4. Learned determinant calculation for square matrices.
5. Practiced nested loops and switch statements.
6. Understood dimension compatibility in matrix multiplication.
7. Improved problem-solving and logical programming skills.

---

# Conclusion

These four programs provide practical understanding of arrays and matrices in C++. They cover basic array manipulation, matrix operations, sparse matrix representation using triplet form, and matrix calculations.

Through these programs, fundamental data structure concepts, nested loops, conditional statements, searching, and complexity analysis are practiced.

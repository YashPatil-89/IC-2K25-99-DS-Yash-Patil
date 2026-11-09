# Lab 02: Sorting and Searching

This directory contains eight C++ programs implementing different sorting and searching algorithms.

---

## Program 1: Bubble Sort

### a. Problem Statement

Write a C++ program to sort an array of integers in ascending order using the Bubble Sort algorithm.

### b. Approach

1. Accept the size and elements of the array.
2. Compare adjacent elements using two nested loops.
3. If the current element is greater than the next element, swap them.
4. Repeat the process for all elements.
5. Display the sorted array.

### c. Time and Space Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n²) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

**Space Complexity:** O(1)

### d. Sample Input and Output

**Input:**
```text
enter size for array: 5
64 34 25 12 22
```

**Output:**
```text
12 22 25 34 64
```

### e. Learning Outcomes

1. Understood the Bubble Sort algorithm.
2. Learned adjacent element comparison.
3. Practiced swapping elements.
4. Understood nested loops in sorting.
5. Analyzed time and space complexity.

---

## Program 2: Selection Sort

### a. Problem Statement

Write a C++ program to sort an array of integers in ascending order using the Selection Sort algorithm.

### b. Approach

1. Accept the size and elements of the array.
2. Assume the first element of the unsorted portion is the minimum.
3. Find the smallest element in the remaining unsorted portion.
4. Swap the minimum element with the first element of the unsorted portion.
5. Repeat until the entire array is sorted.
6. Display the sorted array.

### c. Time and Space Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n²) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

**Space Complexity:** O(1)

### d. Sample Input and Output

**Input:**
```text
enter size of array: 5
64 25 12 22 11
```

**Output:**
```text
11 12 22 25 64
```

### e. Learning Outcomes

1. Understood the Selection Sort algorithm.
2. Learned minimum element selection.
3. Practiced swapping elements.
4. Understood sorted and unsorted portions of an array.
5. Analyzed sorting complexity.

---

## Program 3: Insertion Sort

### a. Problem Statement

Write a C++ program to sort an array of integers in ascending order using the Insertion Sort algorithm.

### b. Approach

1. Accept the number of elements and array elements.
2. Consider the first element as the sorted portion.
3. Select the next element as the key.
4. Compare the key with previous elements.
5. Shift elements greater than the key one position to the right.
6. Insert the key at its correct position.
7. Repeat until the array is sorted.
8. Display the sorted array.

### c. Time and Space Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

**Space Complexity:** O(1)

### d. Sample Input and Output

**Input:**
```text
5
12 11 13 5 6
```

**Output:**
```text
5 6 11 12 13
```

### e. Learning Outcomes

1. Understood the Insertion Sort algorithm.
2. Learned the concept of key elements.
3. Practiced shifting array elements.
4. Understood sorted and unsorted portions.
5. Analyzed the efficiency of Insertion Sort.

---

## Program 4: Merge Sort

### a. Problem Statement

Write a C++ program to sort an array of integers in ascending order using the Merge Sort algorithm.

### b. Approach

1. Accept the number of elements and array elements.
2. Divide the array into two halves using the middle index.
3. Recursively divide the subarrays until each contains one element.
4. Use the `merge()` function to combine the sorted subarrays.
5. Compare elements from the left and right subarrays.
6. Copy the remaining elements into the original array.
7. Display the sorted array.

### c. Time and Space Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

**Space Complexity:** O(n)

Additional space is required for temporary left and right arrays during merging.

### d. Sample Input and Output

**Input:**
```text
6
38 27 43 3 9 82
```

**Output:**
```text
3 9 27 38 43 82
```

### e. Learning Outcomes

1. Understood the Divide and Conquer technique.
2. Learned recursive array division.
3. Understood the merging process.
4. Practiced recursion in C++.
5. Analyzed Merge Sort complexity.

---

## Program 5: Quick Sort

### a. Problem Statement

Write a C++ program to sort an array of integers in ascending order using the Quick Sort algorithm.

### b. Approach

1. Accept the number of elements and array elements.
2. Select the last element as the pivot.
3. Use the `partition()` function to rearrange elements.
4. Place elements smaller than the pivot before it.
5. Place the pivot at its correct position.
6. Recursively apply Quick Sort to the left and right subarrays.
7. Display the sorted array.

### c. Time and Space Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n²) |

**Space Complexity:**
- Average Case: O(log n)
- Worst Case: O(n)

Space is used by recursive function calls.

### d. Sample Input and Output

**Input:**
```text
5
10 7 8 9 1
```

**Output:**
```text
1 7 8 9 10
```

### e. Learning Outcomes

1. Understood the Quick Sort algorithm.
2. Learned pivot selection.
3. Practiced array partitioning.
4. Understood recursive sorting.
5. Analyzed best, average and worst-case complexity.

---

## Program 6: Heap Sort

### a. Problem Statement

Write a C++ program to sort an array of integers in ascending order using the Heap Sort algorithm.

### b. Approach

1. Accept the number of elements and array elements.
2. Build a Max Heap using the `heapify()` function.
3. Find the largest element at the root of the heap.
4. Swap the root element with the last element.
5. Reduce the heap size.
6. Apply `heapify()` again to maintain the Max Heap property.
7. Repeat until the array is sorted.
8. Display the sorted array.

### c. Time and Space Complexity Analysis

| Operation | Time Complexity |
|---|---|
| Building Max Heap | O(n) |
| Heapify | O(log n) |
| Heap Sort | O(n log n) |

**Space Complexity:** O(log n)

The implementation uses recursive `heapify()`, which requires additional recursion stack space.

### d. Sample Input and Output

**Input:**
```text
5
12 11 13 5 6
```

**Output:**
```text
5 6 11 12 13
```

### e. Learning Outcomes

1. Understood the Heap Sort algorithm.
2. Learned Max Heap construction.
3. Practiced heapify operations.
4. Understood parent and child relationships in heaps.
5. Analyzed Heap Sort complexity.

---

## Program 7: Radix Sort

### a. Problem Statement

Write a C++ program to sort an array of non-negative integers in ascending order using the Radix Sort algorithm.

### b. Approach

1. Accept the number of elements and array elements.
2. Find the maximum element using the `getMax()` function.
3. Process elements digit by digit, starting from the units place.
4. Use the `countingSort()` function to sort elements according to the current digit.
5. Maintain the relative order of elements using reverse traversal during output placement.
6. Repeat for tens, hundreds and subsequent digit positions.
7. Display the sorted array.

### c. Time and Space Complexity Analysis

Let:
- `n` = Number of elements.
- `d` = Maximum number of digits.
- `b` = Base (10 for decimal numbers).

| Operation | Time Complexity |
|---|---|
| Finding Maximum | O(n) |
| Counting Sort per Digit | O(n + b) |
| Radix Sort | O(d × (n + b)) |

**Space Complexity:** O(n + b)

Additional arrays are used for output and digit counting.

### d. Sample Input and Output

**Input:**
```text
6
170 45 75 90 802 24
```

**Output:**
```text
24 45 75 90 170 802
```

### e. Learning Outcomes

1. Understood the Radix Sort algorithm.
2. Learned digit-wise sorting.
3. Understood Counting Sort.
4. Learned stable sorting techniques.
5. Practiced finding the maximum element.
6. Analyzed Radix Sort complexity.

---

## Program 8: Binary Search

### a. Problem Statement

Write a C++ program to search for a particular element in a sorted array using the Binary Search algorithm.

### b. Approach

1. Accept the number of elements and array elements.
2. Accept the element to search.
3. Initialize `low` to 0 and `high` to n-1.
4. Calculate the middle index using `low + (high - low) / 2`.
5. Compare the middle element with the search key.
6. If both are equal, return the middle index.
7. If the key is greater, search the right half.
8. If the key is smaller, search the left half.
9. Repeat until the element is found or the search range becomes empty.
10. Display the search result.

**Note:** The input array must already be sorted in ascending order.

### c. Time and Space Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(1) |
| Average Case | O(log n) |
| Worst Case | O(log n) |

**Space Complexity:** O(1)

The program uses iterative Binary Search without additional data structures.

### d. Sample Input and Output

**Input:**
```text
5
10 20 30 40 50
30
```

**Output:**
```text
Element found at index 2
```

If the element is not present:

```text
Element not found
```

### e. Learning Outcomes

1. Understood the Binary Search algorithm.
2. Learned the Divide and Conquer technique.
3. Practiced using `low`, `high` and `mid` variables.
4. Understood the importance of sorted arrays.
5. Compared linear and binary search.
6. Analyzed searching complexity.

---

## Conclusion

This lab covers eight important sorting and searching algorithms in C++.

Through these programs, concepts such as element comparison, swapping, recursion, partitioning, heap construction, digit-wise sorting and Divide and Conquer are practiced.

The implementations also provide an understanding of the time and space complexity of different algorithms.

# Lab 04: Stacks and Queues

## Program 1: Implementing Stack

### a. Problem Statement
Implement a stack using an array with Push, Pop, Peek, and Display operations.

### b. Approach
Use an array and a `top` variable to follow the LIFO principle. Handle overflow and underflow conditions.

### c. Time and Space Complexity
- Push: O(1)
- Pop: O(1)
- Peek: O(1)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Push: 10
Push: 20
Display: 20 10
Pop: 20
Peek: 10
```

### e. Learning Outcomes
Understanding stack operations, LIFO, and array-based implementation.

---

## Program 2: Multiple Stacks Using Array

### a. Problem Statement
Implement two stacks using a single array.

### b. Approach
Use two top pointers. Stack 1 grows from left to right, while Stack 2 grows from right to left.

### c. Time and Space Complexity
- Push: O(1)
- Pop: O(1)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Push1: 10
Push2: 20
Show1: 10
Show2: 20
```

### e. Learning Outcomes
Understanding multiple stacks and efficient array space utilization.

---

## Program 3: Static Queue

### a. Problem Statement
Implement a queue using a fixed-size array.

### b. Approach
Use `front` and `rear` pointers to perform Enqueue, Dequeue, and Display operations following FIFO.

### c. Time and Space Complexity
- Enqueue: O(1)
- Dequeue: O(1)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Enqueue: 10
Enqueue: 20
Display: 10 20
Dequeue: 10
```

### e. Learning Outcomes
Understanding FIFO and static queue implementation.

---

## Program 4: Dynamic Queue

### a. Problem Statement
Implement a queue using a linked list.

### b. Approach
Use nodes with `front` and `rear` pointers. Insert at the rear and delete from the front.

### c. Time and Space Complexity
- Enqueue: O(1)
- Dequeue: O(1)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Enqueue: 10
Enqueue: 20
Display: 10 20
Dequeue: 10
```

### e. Learning Outcomes
Understanding linked-list-based queues and dynamic memory allocation.

---

## Program 5: Circular Queue

### a. Problem Statement
Implement a circular queue using an array.

### b. Approach
Use modulo (`%`) to connect the last array position to the first and reuse empty spaces.

### c. Time and Space Complexity
- Enqueue: O(1)
- Dequeue: O(1)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Enqueue: 10
Enqueue: 20
Display: 10 20
Dequeue: 10
```

### e. Learning Outcomes
Understanding circular queues and efficient memory utilization.

---

## Program 6: Deque

### a. Problem Statement
Implement a Double Ended Queue using an array.

### b. Approach
Use circular array indexing to insert and delete elements from both front and rear.

### c. Time and Space Complexity
- Insert Front/Rear: O(1)
- Delete Front/Rear: O(1)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Insert Front: 10
Insert Rear: 20
Display: 10 20
Delete Front: 10
```

### e. Learning Outcomes
Understanding double-ended queues and circular array operations.

---

## Program 7: Priority Queue Using Array

### a. Problem Statement
Implement a priority queue using an array.

### b. Approach
Store data with priorities. During deletion, find and remove the element with the highest priority.

### c. Time and Space Complexity
- Enqueue: O(1)
- Dequeue: O(n)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Insert: 10, Priority: 1
Insert: 20, Priority: 3
Delete: 20
```

### e. Learning Outcomes
Understanding priority-based deletion and array implementation.

---

## Program 8: Priority Queue Using Heap

### a. Problem Statement
Implement a priority queue using a binary max heap.

### b. Approach
Insert elements using heapify-up and delete the highest-priority element using heapify-down.

### c. Time and Space Complexity
- Enqueue: O(log n)
- Dequeue: O(log n)
- Display: O(n)
- Space: O(n)

### d. Sample Input and Output
```text
Insert: 10, Priority: 1
Insert: 20, Priority: 3
Delete: 20
```

### e. Learning Outcomes
Understanding binary heaps, heapify operations, and efficient priority queues.

---

## Conclusion

This lab covers stack and queue implementations using arrays, linked lists, circular arrays, and heaps, along with their fundamental operations and complexities.

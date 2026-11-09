# Lab06 – Graphs

## Program 01: Graph Representation Using Adjacency Matrix

**a. Problem Statement:** Represent an undirected graph using an adjacency matrix.

**b. Approach:** Use a 2D array where `1` indicates an edge between two vertices and `0` indicates no edge.

**c. Time and Space Complexity:**
- Time: O(V²) for displaying the matrix.
- Space: O(V²).

**d. Sample Input and Output:**

Input:
```text
4 3
0 1
0 2
1 3
```

Output:
```text
Adjacency Matrix:
0 1 1 0
1 0 0 1
1 0 0 0
0 1 0 0
```

**e. Learning Outcomes:** Understanding graph representation using adjacency matrices.

---

## Program 02: Graph Representation Using Adjacency List

**a. Problem Statement:** Represent an undirected graph using an adjacency list.

**b. Approach:** Use an array of vectors to store the neighbouring vertices of each vertex.

**c. Time and Space Complexity:**
- Time: O(V + E).
- Space: O(V + E).

**d. Sample Input and Output:**

Input:
```text
4 3
0 1
0 2
1 3
```

Output:
```text
0 -> 1 2
1 -> 0 3
2 -> 0
3 -> 1
```

**e. Learning Outcomes:** Understanding adjacency lists and efficient graph storage.

---

## Program 03: Breadth First Search (BFS)

**a. Problem Statement:** Traverse a graph using Breadth First Search.

**b. Approach:** Use a queue and a visited array to visit vertices level by level, starting from a given vertex.

**c. Time and Space Complexity:**
- Time: O(V + E).
- Space: O(V).

**d. Sample Input and Output:**

Input:
```text
4 4
0 1
0 2
1 3
2 3
0
```

Output:
```text
0 1 2 3
```

**e. Learning Outcomes:** Understanding queue-based graph traversal.

---

## Program 04: Recursive Depth First Search (DFS)

**a. Problem Statement:** Traverse a graph using recursive Depth First Search.

**b. Approach:** Use recursion and a visited array to explore each unvisited neighbouring vertex.

**c. Time and Space Complexity:**
- Time: O(V + E).
- Space: O(V) for recursion and visited storage.

**d. Sample Input and Output:**

Input:
```text
4 4
0 1
0 2
1 3
2 3
0
```

Output:
```text
0 1 3 2
```

**e. Learning Outcomes:** Understanding recursive graph traversal.

---

## Program 05: Iterative Depth First Search (DFS)

**a. Problem Statement:** Traverse a graph using iterative Depth First Search.

**b. Approach:** Use a stack and visited array to explore vertices in depth-first order without recursion.

**c. Time and Space Complexity:**
- Time: O(V + E).
- Space: O(V).

**d. Sample Input and Output:**

Input:
```text
4 4
0 1
0 2
1 3
2 3
0
```

Output:
```text
0 2 3 1
```

**e. Learning Outcomes:** Understanding stack-based graph traversal.

---

## Program 06: Weighted Graph Using Adjacency List

**a. Problem Statement:** Represent an undirected weighted graph using an adjacency list.

**b. Approach:** Store each neighbouring vertex along with its edge weight using pairs of integers.

**c. Time and Space Complexity:**
- Time: O(V + E).
- Space: O(V + E).

**d. Sample Input and Output:**

Input:
```text
4 3
0 1 4
0 2 2
1 3 5
```

Output:
```text
0 -> (1,4) (2,2)
1 -> (0,4) (3,5)
2 -> (0,2)
3 -> (1,5)
```

**e. Learning Outcomes:** Understanding weighted graphs and storing edge weights.

---

## Program 07: Dijkstra's Shortest Path Algorithm

**a. Problem Statement:** Find the shortest distances from a given source vertex to all other vertices in a weighted graph.

**b. Approach:** Use Dijkstra's algorithm with a min-priority queue to repeatedly process the vertex with the smallest known distance and update neighbouring distances.

**c. Time and Space Complexity:**
- Time: O((V + E) log V).
- Space: O(V + E).

**d. Sample Input and Output:**

Input:
```text
4 4
0 1 4
0 2 1
1 3 1
2 3 5
0
```

Output:
```text
0 to 0 = 0
0 to 1 = 4
0 to 2 = 1
0 to 3 = 5
```

**e. Learning Outcomes:** Understanding shortest path algorithms and priority queues.

Graph Traversal: DFS and BFS

1.Overview
This project demonstrates the implementation of Depth-First Search (DFS) and Breadth-First Search (BFS) algorithms for traversing a graph.

2.Algorithms
  1. Depth-First Search (DFS)
  Description:
  DFS explores as far as possible along each branch before backtracking. It is implemented recursively in this project.
  
  Key Steps:
  
  Start at the root node (A).
  Visit a neighbor and keep exploring deeper until all neighbors are visited.
  Backtrack when no unvisited neighbors remain.
  Result (Traversal Order):
  A -> B -> D -> E -> F -> C

  2. Breadth-First Search (BFS)
  Description:
  BFS explores all neighbors at the current depth before moving on to the next depth level. It uses a queue to manage traversal order.
  
  Key Steps:
  
  Start at the root node (A).
  Visit all neighbors of the current node.
  Continue to the next level of neighbors.
  Result (Traversal Order):
  A -> B -> C -> D -> E -> F

3.Observations

DFS: It is useful for exploring all paths in a graph, detecting cycles, or solving problems like pathfinding.

BFS: It is ideal for finding the shortest path in an unweighted graph or performing level-order traversal.

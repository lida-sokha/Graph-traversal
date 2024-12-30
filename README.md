Graph Traversal: DFS and BFS

1. Objective

This project implements Depth-First Search (DFS) and Breadth-First Search (BFS) traversal algorithms for an undirected graph. Additionally, it includes a method to display the graph's structure using an adjacency list representation.

Input Graph

The graph is defined as follows:

Vertices: {0, 1, 2, 3, 4}

Edges: {(0,1), (0,4), (1,2), (1,3), (3,4)}

2. Algorithms

  1. Depth-First Search (DFS)

  Description:
  DFS explores as far as possible along each branch before backtracking. It is implemented recursively in this project.
  
  Approach:

  Implemented recursively with a helper function to track visited nodes.

  Traversal Order: Starting from vertex 0, 

  the traversal is:

  0 -> 1 -> 2 -> 3 -> 4

  2. Breadth-First Search (BFS)
     
  Description:
  BFS explores all neighbors at the current depth before moving on to the next depth level. It uses a queue to manage traversal order.
  
 Approach:

  Uses a queue to manage the traversal order and a visited list to avoid revisiting nodes.

  Traversal Order: Starting from vertex 0, 

  the traversal is:

  0 -> 1 -> 4 -> 2 -> 3
3. Display 

Method: Display()

Description:

Prints the graph's structure in adjacency list format, showing which vertices are connected to each other.

3.Observations

DFS: It is useful for exploring all paths in a graph, detecting cycles, or solving problems like pathfinding.

BFS: It is ideal for finding the shortest path in an unweighted graph or performing level-order traversal.

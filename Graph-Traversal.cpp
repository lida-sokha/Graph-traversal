#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

class Graph {
private:
    int vertices; // Number of vertices
    vector<vector<int>> adjList; // Adjacency list representation

public:
    // Constructor
    Graph(int v) : vertices(v) {
        adjList.resize(v);
    }

    // Add an edge to the graph
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }

    // DFS Implementation
    void DFS(int startVertex) {
        vector<bool> visited(vertices, false);
        vector<int> traversal;
        dfsHelper(startVertex, visited, traversal);

        // Print the traversal order
        cout << "DFS Traversal: ";
        for (int vertex : traversal) {
            cout << vertex << " ";
        }
        cout << endl;
    }

    // Helper function for DFS (Recursive)
    void dfsHelper(int vertex, vector<bool>& visited, vector<int>& traversal) {
        visited[vertex] = true;
        traversal.push_back(vertex);

        for (int neighbor : adjList[vertex]) {
            if (!visited[neighbor]) {
                dfsHelper(neighbor, visited, traversal);
            }
        }
    }

    // BFS Implementation
    void BFS(int startVertex) {
        vector<bool> visited(vertices, false);
        queue<int> q;
        vector<int> traversal;

        q.push(startVertex);
        visited[startVertex] = true;

        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            traversal.push_back(vertex);

            for (int neighbor : adjList[vertex]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }

        // Print the traversal order
        cout << "BFS Traversal: ";
        for (int vertex : traversal) {
            cout << vertex << " ";
        }
        cout << endl;
    }

    // Display the graph's structure
    void Display() {
        cout << "Graph (Adjacency List):" << endl;
        for (int i = 0; i < vertices; ++i) {
            cout << i << ": ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create the graph
    Graph graph(5);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(3, 4);

    // Display the graph structure
    graph.Display();

    // Perform DFS starting from vertex 0
    graph.DFS(0);

    // Perform BFS starting from vertex 0
    graph.BFS(0);

    return 0;
}

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
using namespace std;

class Graph {
public:
    map<char, vector<char>> adjList; 

    void addEdge(char from, char to) {
        adjList[from].push_back(to); 
        adjList[to];                 
    }

    void dfs(char node, set<char>& visited, vector<char>& result) {
        if (visited.count(node) == 0) { 
            visited.insert(node);       
            result.push_back(node);     

            for (char neighbor : adjList[node]) {
                dfs(neighbor, visited, result);
            }
        }
    }

    vector<char> bfs(char startNode) {
        vector<char> result;   
        queue<char> q;        
        set<char> visited;    
        q.push(startNode);     
        visited.insert(startNode);

        while (!q.empty()) {
            char current = q.front(); 
            q.pop();
            result.push_back(current); 

            for (char neighbor : adjList[current]) {
                if (visited.count(neighbor) == 0) {
                    visited.insert(neighbor);
                    q.push(neighbor);         
                }
            }
        }

        return result;
    }
};

int main() {
    Graph graph;

    // Create the graph by adding edges
    graph.addEdge('A', 'B');
    graph.addEdge('A', 'C');
    graph.addEdge('B', 'D');
    graph.addEdge('B', 'E');
    graph.addEdge('C', 'F');
    graph.addEdge('E', 'F');

    // Perform DFS traversal
    set<char> visited;            
    vector<char> dfsResult;        
    graph.dfs('A', visited, dfsResult);

    // Perform BFS traversal
    vector<char> bfsResult = graph.bfs('A');

    // Display the traversal results
    cout << "DFS Traversal: ";
    for (char node : dfsResult) {
        cout << node << " ";
    }
    cout << endl;

    cout << "BFS Traversal: ";
    for (char node : bfsResult) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
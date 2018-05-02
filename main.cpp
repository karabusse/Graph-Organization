#include <iostream>
#include <fstream>
#include "graph.h"
#include <string>
/*
 * Weighted directed graph
 * Use adjacency matrix or adjacency list
 */
using namespace std;

/**
 * Constructor for myGraph class
 * @param v
 */
myGraph::myGraph(int v) {
    this->numVertices = v;
    adj = new list<int>[v];
}

/**
 * Given a node w, add node w to v's list
 * @param v
 * @param w
 */
void myGraph::addEdge(int v, int w) {
    adj[v].push_back(w); //Adds w to v's list
}


void myGraph::TopologicalSortUtil(int v, bool *visited, stack<int> &Stack) {
    visited[v] = true; //Marks the current node as visited
}

/**
 * Accept file name & read in new graph from file
 * @param filename
 */
void myGraph::ReadGraph(string filename) {
    int count = 0;
    int numVertices;
    string line;
    ifstream myfile(filename);
    if (myfile.is_open()) {
        cout << line << '\n'; //This is for debugging
        count++;
        if (count == 1) {
            numVertices = stoi(line);
        }
        for (int i = 0; i < numVertices; i++) {

        }


        for (int i = 0; i < count; i++) {

        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }
}

/**
 * Print topological sort of graph
c++ - Weighted directed gra
 * or error stating not possible
 *
 * This is depth first search
 */
void myGraph::TopologicalSort() {}

/**
 * Use Kruskal's algorithm
 * Print total weight of min span tree
 * Print list of edges and individual weight (1 edge/line)
 * Treat graph as undirected
 * 
 */
void myGraph::MinimumSpanningTree() {}

/**
 * Accept node n
 * Print cost and path from all other vertices to n
 * One path and cost per line
 * Use Dijkstra's with priority queue
 * Don't print info for vertices that cannot be reached
 * @param n
 */
void myGraph::ShortestPath(node n) {}

/**
 * Allow user to input graphs & perform graph operations
 * Must allow reading of multiple graphs in single run of program
 * @return
 */
int main() {
    myGraph g;
    string filename;
    cout << "Enter the name of a file in order to use it" << endl;
    cin >> filename;
    g.ReadGraph(filename);
    return 0;
}
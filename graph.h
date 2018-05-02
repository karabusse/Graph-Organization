//
// Created by kara on 5/1/18.
//

#include <list>
#include <stack>

#ifndef GRAPHS_GRAPH_H
#define GRAPHS_GRAPH_H


#endif //GRAPHS_GRAPH_H

using namespace std;

struct edge {
    int destination;
    int weight;
};

struct node {
    string path;
    int cost;
    node* next(int cost, string path);
};



class myGraph {
public:
    int numVertices;
    list<int> *adj; //Pointer to array containing adjacency list
    myGraph(int v); //Constructor
    void addEdge(int v, int w);
    void ReadGraph(string filename);
    void TopologicalSortUtil(int v, bool visited[], stack<int> &Stack);
    void TopologicalSort();
    void ShortestPath(node n);
    void MinimumSpanningTree();
};
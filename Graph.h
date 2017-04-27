//
// Created by Максим Бачинский on 27.04.17.
//

#ifndef WAYBIGWORK_GRAPH_H
#define WAYBIGWORK_GRAPH_H

using namespace std;
#include <map>
#include <vector>
#include <list>
#include <iostream>

// вершина

struct node {
    int id;

    node(int id) : id(id) {}
};


struct edge {
    node *pointA;
    node *pointB;
    int length;

    edge(node *pointA, node *pointB, int length) : pointA(pointA), pointB(pointB), length(length) {}
};


class Graph {
    typedef node *Node;
    typedef edge *Edge;

    vector<Node> nodes;
    vector<list<Edge>> adjacencyList;
    int numberOfNodes;

    Graph(std::istream &in) {
        in >> numberOfNodes;
        adjacencyList = vector(numberOfNodes);

        for (int i = 0; i < numberOfNodes; ++i) {
            node *n = new node(i);
            nodes.push_back(n);
        }

        for (int j = 0; j < numberOfNodes; ++j) {
            int number;
            in >> number;
            for (int i = 0; i < number; ++i) {
                int pointBId, length;
                in >> pointBId >> length;
                edge *e = new edge(nodes[j], nodes[pointBId], length);
                adjacencyList[j].push_back(e);
            }
        }
    }


};


#endif //WAYBIGWORK_GRAPH_H

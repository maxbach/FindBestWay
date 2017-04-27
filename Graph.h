//
// Created by Максим Бачинский on 27.04.17.
//

#ifndef WAYBIGWORK_GRAPH_H
#define WAYBIGWORK_GRAPH_H

using namespace std;
#include <map>
#include <vector>
#include <list>

// вершина
template <class T>
struct node {
    T *data;

    node(T *data) : data(data) {}
};

template <class T>
struct edge {
    node<T> *pointA;
    node<T> *pointB;
    int length;

    edge(node<T> *pointA, node<T> *pointB, int length) : pointA(pointA), pointB(pointB), length(length) {}
};

template <class T>
class Graph {
    typedef node<T>* Node;
    typedef edge<T>* Edge;

    vector<Node> nodes;
    map<Node, list<Edge>> adjacencyList;


};


#endif //WAYBIGWORK_GRAPH_H

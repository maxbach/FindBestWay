//
// Created by Максим Бачинский on 27.04.17.
//

#ifndef WAYBIGWORK_FINDWAY_H
#define WAYBIGWORK_FINDWAY_H

#include "Graph.h"

class ShortestWayFinder {


public:
    virtual void getShortestWay(node* a, node* b) = 0;

private:
    Graph* graph;


};

#endif //WAYBIGWORK_FINDWAY_H

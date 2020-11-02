//
// Created by tim on 02.11.20.
//

#ifndef POINTLABELER_GREEDYALGORITHM_HPP
#define POINTLABELER_GREEDYALGORITHM_HPP

#include <vector>
#include <iostream>
#include "Point.hpp"

namespace PointLabeler
{

class GreedyAlgorithm
{

public:
    explicit GreedyAlgorithm(std::vector<PointLabeler::Point> &points);

    void solve();

private:
    std::vector<PointLabeler::Point> &points;
};

}

#endif //POINTLABELER_GREEDYALGORITHM_HPP

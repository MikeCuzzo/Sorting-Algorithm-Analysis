//
// Created by mcuzzo71 on 3/8/21.
//

#ifndef PROGRAM2_ALGORITHMSTRATEGY_H
#define PROGRAM2_ALGORITHMSTRATEGY_H

#include "vector"
#include "chrono"
#include <stdlib.h>
#include "algorithm"
#include "iostream"

//sorting algorithms references from geeksforgeeks.com

class AlgorithmStrategy {
public:
    //each data set will contain an integer within 10x the size of the size
    virtual void load(std::string,int) = 0;

    //executes the sorting algorithm
    virtual void execute() = 0;

    //Prints algorithm name, execution time and number of records analyzed to screen in a readable format
    virtual void stats() = 0;

    //Similar to select above, but indicates what algorithm to handoff sorting to and at what data set size]
    virtual void handoff(std::string) = 0;
};

#endif //PROGRAM2_ALGORITHMSTRATEGY_H

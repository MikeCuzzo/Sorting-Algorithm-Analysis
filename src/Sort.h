//
// Created by mcuzzo71 on 3/19/21.
//

#ifndef INC_21S_PA02_MIKECUZZO_SORT_H
#define INC_21S_PA02_MIKECUZZO_SORT_H


#include "AlgorithmStrategy.h"
#include "SortAlgs.h"
#include "algorithm"
#include "random"

//random number generator code referenced from fluentcpp.com

class Sort: public AlgorithmStrategy{
private:
    long executionTime;
    std::vector<int> data;
    std::vector<int>(*currAlg)(std::vector<int>&);
    std::string algName;
    std::string dataType;

public:
    Sort();
    ~Sort();
    void load(std::string,int);
    void execute();
    void stats();
    void handoff(std::string);
};


#endif //INC_21S_PA02_MIKECUZZO_SORT_H

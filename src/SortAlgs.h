//
// Created by mcuzzo71 on 3/19/21.
//

#ifndef INC_21S_PA02_MIKECUZZO_SORTALGS_H
#define INC_21S_PA02_MIKECUZZO_SORTALGS_H

#include "vector"

//code for the sorting algorithms are referenced from geeksforgeeks.com

class SortAlgs {
public:
    //selection
    std::vector<int> selection(std::vector<int>,int);
    //quick
    std::vector<int> quick(std::vector<int>,int,int);
    //merge
    std::vector<int> merge(std::vector<int>);
    std::vector<int> sortMerge(std::vector<int>,int,int);
    std::vector<int> merger(std::vector<int>,int,int,int);
    //insertion
    std::vector<int> insertion(std::vector<int>);
    //heap
    std::vector<int> heap(std::vector<int>,int);
    //bubble
    std::vector<int> bubble(std::vector<int>);
};


#endif //INC_21S_PA02_MIKECUZZO_SORTALGS_H

//
// Created by mcuzzo71 on 3/19/21.
//

#ifndef INC_21S_PA02_MIKECUZZO_SORTALGS_H
#define INC_21S_PA02_MIKECUZZO_SORTALGS_H

#include "vector"
#include "chrono"

//code for the sorting algorithms are referenced from geeksforgeeks.com
//quicksort code referenced from https://www.danielkoitzsch.de/blog/2016/11/18/quicksort-implementation-in-c/

class SortAlgs {
public:
    //selection
    static std::vector<int> selection(std::vector<int>);

    //quick
    static std::vector<int> quick(std::vector<int>);
    static std::vector<int> quickSort(std::vector<int>,int,int);

    //merge
    static std::vector<int> merge(std::vector<int>);
    static std::vector<int> sortMerge(std::vector<int>,int,int);
    static std::vector<int> merger(std::vector<int>,int,int,int);

    //insertion
    static std::vector<int> insertion(std::vector<int>);

    //heap
    static std::vector<int> heap(std::vector<int>);
    static void heapify(std::vector<int>,int,int);

    //bubble
    static std::vector<int> bubble(std::vector<int>);
};


#endif //INC_21S_PA02_MIKECUZZO_SORTALGS_H

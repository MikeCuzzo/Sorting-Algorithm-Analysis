//
// Created by mcuzzo71 on 3/19/21.
//

#include "Sort.h"

Sort::Sort() {
    executionTime = 0;
    data = {};
}

Sort::~Sort() {};

//generates datasets based on the criteria
void Sort::load(int size) {
    //clears data
    data.clear();

    srand(size + time(NULL));
    //random
    for(int i=0;i<size;i++) {
        data.push_back(rand() % (size*2) + 1);
    }
    //reversed sorted order
    //20% unique
    //30% randomized
}

void Sort::execute() {
    //reset execution time
    executionTime = 0;
    auto start = std::chrono::high_resolution_clock::now();
    data = currAlg(data);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    executionTime = duration.count();
}

void Sort::stats() {
    std::cout << algName << " executed in " << executionTime
              << " microseconds with " << data.size() << " elements" << std::endl;
}

void Sort::handoff(std::string sortName) {
    switch (sortName[0]) {
        //selection
        case 's':
            currAlg = reinterpret_cast<std::vector<int> (*)(std::vector<int> &)>(&SortAlgs::selection);
            algName = "Selection Sort";
            break;

        //quick
        case 'q':
            currAlg = reinterpret_cast<std::vector<int> (*)(std::vector<int> &)>(&SortAlgs::quick);
            algName = "Quick Sort";
            break;

        //merge
        case 'm':
            currAlg = reinterpret_cast<std::vector<int> (*)(std::vector<int> &)>(&SortAlgs::merge);
            algName = "Merge Sort";
            break;

        //insertion
        case 'i':
            currAlg = reinterpret_cast<std::vector<int> (*)(std::vector<int> &)>(&SortAlgs::insertion);
            algName = "Insertion Sort";
            break;

        //heap
        case 'h':
            currAlg = reinterpret_cast<std::vector<int> (*)(std::vector<int> &)>(&SortAlgs::heap);
            algName = "Heap Sort";
            break;

        //bubble
        case 'b':
            currAlg = reinterpret_cast<std::vector<int> (*)(std::vector<int> &)>(&SortAlgs::bubble);
            algName = "Bubble Sort";
            break;

        default:
            std::cout << "Nothing found" << std::endl;
    }
}

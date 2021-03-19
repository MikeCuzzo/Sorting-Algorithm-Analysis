//
// Created by mcuzzo71 on 3/19/21.
//

#include "Sort.h"

Sort::Sort(){executionTime = 0;data = {};}

Sort::~Sort(){};

//generates datasets based on the criteria
void Sort::load(int size) {
    srand(size + time(NULL));
}

void Sort::execute() {
    //reset execution time
    executionTime = 0;
    auto start = std::chrono::high_resolution_clock::now();
    data = currAlg(data);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    executionTime = duration.count();
}

void Sort::stats() {
    std::cout << algName << " executed in " << executionTime
         << " microseconds with " << data.size() << " elements" << std::endl;
}

void Sort::handoff(std::string sortName) {

}

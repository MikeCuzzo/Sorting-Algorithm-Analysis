#include <iostream>
#include "AlgorithmStrategy.h"
#include "Sort.h"
#include "vector"

int main() {
    //assigns algorithms
    std::vector<std::string> sorts = {"selection","quick","merge","insertion","heap","bubble"};

    //assigns data sizes
    std::vector<int> dataSizes = {10, 1000, 10000, 100000, 1000000};

    AlgorithmStrategy* s = new Sort;

    for(int i=0; i<sorts.size(); i++){
        s->handoff(sorts[i]);
        for(int j=0; j<dataSizes.size(); j++){
            s->load(dataSizes[j]);
            s->execute();
            s->stats();
        }
    }

    return 0;
}

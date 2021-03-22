#include <iostream>
#include "AlgorithmStrategy.h"
#include "Sort.h"
#include "vector"

int main() {
    //assigns algorithms
    std::vector<std::string> sorts = {"selection", "quick", "merge", "insertion", "heap", "bubble"};

    //assigns data set sizes
    std::vector<int> dataSizes = {10, 1000, 10000, 100000, 1000000};

    //assigns data set types
    std::vector<std::string> dataTypes = {"fullRand" ,"reversed", "unique", "semiRand"};


    AlgorithmStrategy *s = new Sort;

    for (int i = 0; i < sorts.size(); i++) {
            s->handoff(sorts[i]);
            for (int j = 0; j < dataTypes.size(); j++) {
                for (int y = 0; y < dataSizes.size(); y++) {
                    s->load(dataTypes[j],dataSizes[y]);
                    s->execute();
                    s->stats();
                }
            }
        }
    return 0;
}

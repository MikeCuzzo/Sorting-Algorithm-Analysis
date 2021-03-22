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
void Sort::load(std::string type, int size) {
    //clears data
    data.clear();

    //engine declaration
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_int_distribution<int> distribution(1, size * 10);

    switch (type[0]) {
        //full random
        case 'f':
            for (int i = 0; i < size; i++) {
                auto const randInt = distribution(random_engine);
                data.push_back(randInt);
            }
            dataType = "random";
            break;

            //reversed sorted order
        case 'r':
            //generates data set
            while (data.size() != size) {
                auto const randInt = distribution(random_engine);
                //ensures uniqueness
                if (!(std::find(data.begin(), data.end(), randInt) != data.end()))
                    data.push_back(randInt);
            }
            //sorts elements in reverse order
            std::sort(data.begin(), data.end(), std::greater<int>());
            dataType = "reverse sorted order";
            break;

            //20% unique
        case 'u':
            //generates the 20% unique portion of the data set
            while (data.size() != size * .2) {
                auto const randInt = distribution(random_engine);
                //ensures uniqueness
                if (!(std::find(data.begin(), data.end(), randInt) != data.end()))
                    data.push_back(randInt);
            }

            //generate the rest of the 80%
            while (true) {
                auto const randInt = distribution(random_engine);
                if (!(std::find(data.begin(), data.end(), randInt) != data.end())) {
                    while (data.size() != size)
                        data.push_back(randInt);

                    break;
                }
            }

            //shuffles vector
            std::random_shuffle(data.begin(), data.end());
            dataType = "20% unique values";
            break;

            //30% randomized
        case 's':
            for (int i = 0; i < size; i++) {
                //ensures 30% random
                if (i % 3 == 0 && i != 0) {
                    auto const randInt = distribution(random_engine);
                    data.push_back(randInt);
                } else
                    data.push_back(i);
            }
            dataType = "30% randomized";
            break;

        default:
            std::cout << "No data type detected" << std::endl;
    }
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
              << " microseconds with " << data.size() << " elements using " << dataType << " values" << std::endl;
}

void Sort::handoff(std::string sortName) {
    //assigns sorting alg
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
            std::cout << "No algorithm found" << std::endl;
    }
}


//
// Created by mcuzzo71 on 3/8/21.
//

#ifndef PROGRAM2_ALGORITHMSTRATEGY_H
#define PROGRAM2_ALGORITHMSTRATEGY_H

#include "vector"
#include "chrono"
#include <stdlib.h>


class AlgorithmStrategy {
public:
    //generates dataset
    void load();

    //executes the sorting algorithm
    void execute();

    //prints solution to the screen
    void display();

    //Prints algorithm name, execution time and number of records analyzed to screen in a readable format
    void stats();

    //enum, int, id or string passed as input and loads corresponding algorithm to interface
    void select();

    //Saves solution to file path given as input
    void save();

    //Similar to select above, but indicates what algorithm to handoff sorting to and at what data set size]
    void handoff();
private:
    std::vector<int> dataSet;
};

class Selection : public AlgorithmStrategy {
    virtual void execute(std::vector<int> dataSet, int n) {
        int i, j, min_idx;

        // One by one move boundary of unsorted sub dataSet
        for (i = 0; i < n-1; i++)
        {
            // Find the minimum element in unsorted dataSet
            min_idx = i;
            for (j = i+1; j < n; j++)
                if (dataSet[j] < dataSet[min_idx])
                    min_idx = j;

            // Swap the found minimum element with the first element
            swap(&dataSet[min_idx], &dataSet[i]);
        }
    }

    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

};

class Quick : public AlgorithmStrategy {
    virtual void execute(std::vector<int> dataSet, int low, int high) {
        if (low < high)
        {
            /* pi is partitioning index, dataSet[pi] is now
               at right place */
            pi = partition(dataSet, low, high);

            execute(dataSet, low, pi - 1);  // Before pi
            execute(dataSet, pi + 1, high); // After pi
        }
    }

};

class MergeInsertion : public AlgorithmStrategy {
    virtual void execute() {

    }

};

class Heap : public AlgorithmStrategy {
    virtual void execute(std::vector<int> dataSet, int n) {
        // Build heap (rearrange dataSet)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(dataSet, n, i);

        // One by one extract an element from heap
        for (int i = n - 1; i > 0; i--) {
            // Move current root to end
            swap(dataSet[0], dataSet[i]);

            // call max heapify on the reduced heap
            heapify(dataSet, i, 0);
        }
    }

    void heapify(std::vector<int> dataSet, int n, int i)
    {
        int largest = i; // Initialize largest as root
        int l = 2 * i + 1; // left = 2*i + 1
        int r = 2 * i + 2; // right = 2*i + 2

        // If left child is larger than root
        if (l < n && dataSet[l] > dataSet[largest])
            largest = l;

        // If right child is larger than largest so far
        if (r < n && dataSet[r] > dataSet[largest])
            largest = r;

        // If largest is not root
        if (largest != i) {
            swap(dataSet[i], dataSet[largest]);

            // Recursively heapify the affected sub-tree
            heapify(dataSet, n, largest);
        }
    }

};

class TBD : public AlgorithmStrategy {
    virtual void execute() {

    }

};

#endif //PROGRAM2_ALGORITHMSTRATEGY_H

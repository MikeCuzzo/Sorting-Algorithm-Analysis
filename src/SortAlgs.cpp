//
// Created by mcuzzo71 on 3/19/21.
//

#include "SortAlgs.h"

std::vector<int> SortAlgs::selection(std::vector<int> data) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < data.size() - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < data.size(); j++)
            if (data[j] < data[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        std::swap(data[min_idx], data[i]);
    }
    return data;
}

std::vector<int> SortAlgs::quick(std::vector<int> data) {
    return quickSort(data,0,data.size());
}

std::vector<int> SortAlgs::quickSort(std::vector<int> data, int low, int high) {
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(data, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(data, low, pi - 1);
        quickSort(data, pi + 1, high);
    }
    return data;
}

int SortAlgs::partition(std::vector<int> data, int low, int high) {
    int pivot = data[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (data[j] < pivot) {
            i++; // increment index of smaller element
            std::swap(data[i], data[j]);
        }
    }
    std::swap(data[i + 1], data[high]);
    return (i + 1);
}

std::vector<int> SortAlgs::merge(std::vector<int> data) {
    return sortMerge(data, 0, data.size() - 1);
}

std::vector<int> SortAlgs::sortMerge(std::vector<int> data, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        data = sortMerge(data, l, m);
        data = sortMerge(data, m + 1, r);
        data = merger(data, l, m, r);
    }
    return data;
}

std::vector<int> SortAlgs::merger(std::vector<int> data, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    //Create temp arrays
    int L[n1], R[n2];

    //Copy data to temp arrays
    for (i = 0; i < n1; i++)
        L[i] = data[l + i];
    for (j = 0; j < n2; j++)
        R[j] = data[m + 1 + j];

    //Merge the temp arrays back into the original
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            data[k] = L[i];
            i++;
        } else {
            data[k] = R[j];
            j++;
        }
        k++;
    }

    //Copy remaining elements of L[], if there are any
    while (i < n1) {
        data[k] = L[i];
        i++;
        k++;
    }

    //Copy remaining elements of R[], if there are any
    while (j < n2) {
        data[k] = R[j];
        j++;
        k++;
    }
    return data;
}

std::vector<int> SortAlgs::insertion(std::vector<int> data) {
    int key = 0;
    int j = 0;
    for (int i = 0; i < data.size(); i++) {
        key = data[i];
        j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
    return data;
}

std::vector<int> SortAlgs::heap(std::vector<int> data) {
    // Build heap (rearrange array)
    for (int i = data.size() / 2 - 1; i >= 0; i--)
        heapify(data, data.size(), i);

    // One by one extract an element from heap
    for (int i = data.size() - 1; i > 0; i--) {
        // Move current root to end
        std::swap(data[0], data[i]);

        // call max heapify on the reduced heap
        heapify(data, i, 0);
    }
    return data;
}

void SortAlgs::heapify(std::vector<int> data, int n, int i) {
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && data[l] > data[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && data[r] > data[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        std::swap(data[i], data[largest]);

        // Recursively heapify the affected sub-tree
        heapify(data, n, largest);
    }
}

std::vector<int> SortAlgs::bubble(std::vector<int> data) {
    bool didSwap = true;
    while (didSwap) {
        didSwap = false;
        for (int i = 0; i < (data.size() - 1); i++) {
            if (data[i] > data[i + 1]) {
                int temp = data[i + 1];
                data[i + 1] = data[i];
                data[i] = temp;
                didSwap = true;
            }
        }
    }
    return data;
}

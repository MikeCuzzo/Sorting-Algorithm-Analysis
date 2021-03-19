//
// Created by mcuzzo71 on 3/19/21.
//

#include "SortAlgs.h"

std::vector<int> SortAlgs::selection(std::vector<int> data, int n) {

}

std::vector<int> SortAlgs::quick(std::vector<int> data, int low, int high) {

}

std::vector<int> SortAlgs::merge(std::vector<int> data) {
    return sortMerge(data, 0, data.size()-1);
}

std::vector<int> SortAlgs::sortMerge(std::vector<int> data,int l,int r) {
    if(l < r){
        int m = l +(r-l)/2;
        data = sortMerge(data, l,m);
        data = sortMerge(data, m+1, r);
        data = merger(data, l, m, r);
    }
    return data;
}

std::vector<int> SortAlgs::merger(std::vector<int> data,int l,int m,int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    //Create temp arrays
    int L[n1], R[n2];

    //Copy data to temp arrays
    for(i = 0; i < n1; i++)
        L[i] = data[l+i];
    for(j = 0; j < n2; j++)
        R[j] = data[m+1+j];

    //Merge the temp arrays back into the original
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            data[k] = L[i];
            i++;
        }else{
            data[k] = R[j];
            j++;
        }
        k++;
    }

    //Copy remaining elements of L[], if there are any
    while(i < n1){
        data[k] = L[i];
        i++;
        k++;
    }

    //Copy remaining elements of R[], if there are any
    while(j < n2){
        data[k] = R[j];
        j++;
        k++;
    }
    return data;
}

std::vector<int> SortAlgs::insertion(std::vector<int> data) {
    int key = 0;
    int j = 0;
    for(int i = 0; i < data.size(); i++){
        key = data[i];
        j = i - 1;

        while(j >= 0 && data[j] > key){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;
    }
    return data;
}

std::vector<int> SortAlgs::heap(std::vector<int> data, int n) {

}

std::vector<int> SortAlgs::bubble(std::vector<int> data) {
    bool didSwap = true;
    while(didSwap){
        didSwap = false;
        for(int i = 0; i < (data.size()-1); i++){
            if(data[i] > data[i+1]){
                int temp = data[i+1];
                data[i+1] = data[i];
                data[i] = temp;
                didSwap = true;
            }
        }
    }
    return data;
}

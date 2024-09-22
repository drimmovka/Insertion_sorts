#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <vector>

template<typename T>
void insertionSort(std::vector<T>& vec, bool (*cmp)(T, T) = *[](T a, T b){return a < b;})
{
    for (int i = 1; i < vec.size(); i++) {
        int j = i;
        while (j > 0 && cmp(vec[j], vec[j-1])) {
            std::swap(vec[j], vec[j-1]);
            j--;
        }
    }
}

#endif
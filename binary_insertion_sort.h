#ifndef BINARY_INSERTION_SORT_H
#define BINARY_INSERTION_SORT_H

#include <vector>

template<typename T>
int binarySearch(std::vector<T>& vec, int value_index, bool (*cmp)(T, T))
{
    T value = vec[value_index];
    int left = 0;
    int right = value_index - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (cmp(value, vec[mid])) {
            if (mid == 0 || mid != 0 && !cmp(value, vec[mid-1])) {
                return mid;
            } else {
                right = mid - 1;
            }
        } else {
            left = mid + 1;
        }
    }
    return value_index;
}

template<typename T>
void binaryInsertionSort(std::vector<T>& vec, bool (*cmp)(T, T) = *[](T a, T b){return a < b;})
{
    for (int i = 0; i < vec.size(); i++) {
        int q = binarySearch(vec, i, cmp);
        T tmp = vec[i];
        for (int j = i; j > q; j--) {
            vec[j] = vec[j-1];
        }

        vec[q] = tmp;
    }
}

#endif
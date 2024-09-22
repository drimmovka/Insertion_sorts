#include <iostream>
#include <vector>
#include <algorithm>
#include "binary_insertion_sort.h"
#include "insertion_sort.h"


template<typename T>
void print(std::vector<T>& vec)
{
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

bool cmp(int a, int b)
{
    return a < b;
}

int main(int argc, char **argv)
{
    srand(time(0));
    std::vector<int> vec(1000);
    
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand()%100;
    }
    
    
    // binaryInsertionSort(vec, cmp);
    
    // std::cout << std::is_sorted(vec.begin(), vec.end()) << std::endl;
    return 0;
}
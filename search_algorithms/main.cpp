// /home/sitaram/dataStructures_algorithms/search_algorithms/main.cpp
#include <iostream>
#include "linearSearch_example.h"
#include "binarySearch_example.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    MyLinearSearch linearSearch(10); // Initialize with size 10
    linearSearch.search(90);

    MyBinarySearch binarySearch(10); // Initialize with size 10
    binarySearch.search(18);

    return 0;
}
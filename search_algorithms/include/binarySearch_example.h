#ifndef BINARYSEARCH_EXAMPLE_H
#define BINARYSEARCH_EXAMPLE_H

#include <vector>

class MyBinarySearch {
    std::vector<int> myVector {0};
public:
    // Constructor
    MyBinarySearch(size_t size);
    // Destructor
    ~MyBinarySearch();    
    // Function to perform linear search
    //int search(const std::vector<int>& vec, int target);
    int search(int target);
};

#endif // BINARYSEARCH_EXAMPLE_H
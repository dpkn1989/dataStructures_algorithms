#ifndef LINEARSEARCH_EXAMPLE_H
#define LINEARSEARCH_EXAMPLE_H

#include <vector>

class MyLinearSearch {
    std::vector<int> myVector {0};
public:
    // Constructor
    MyLinearSearch(size_t size);
    // Destructor
    ~MyLinearSearch();    
    // Function to perform linear search
    //int search(const std::vector<int>& vec, int target);
    int search(int target);
};

#endif // LINEARSEARCH_EXAMPLE_H
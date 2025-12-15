#include <iostream>
#include "linearSearch_example.h"

MyLinearSearch::MyLinearSearch(size_t size) 
{
    std::cout << "MyLinearSearch constructor called and the Vector size is "<< myVector.size() << std::endl;
    myVector.resize(size);
    for(int i = 0; i < size; ++i) {
        myVector[i] = static_cast<int>(i * 10);// Initialize with some values
    }
}

MyLinearSearch::~MyLinearSearch()
{
    std::cout << "MyLinearSearch destructor called." << std::endl;
}

// int MyLinearSearch::search(const std::vector<int>& vec, int target)
int MyLinearSearch::search(int target)
{
    std::cout << "Starting linear search for " << target << "." << std::endl;
    for(size_t i = 0; i < myVector.size(); ++i) {
        if(myVector[i] == target) {
            std::cout << "Element " << target << " found at index " << i << "." << std::endl;
            return i;
        }
    }
    std::cout << "Element " << target << " not found in the vector." << std::endl;
    return -1;
}
#include <iostream>
#include "binarySearch_example.h"

MyBinarySearch::MyBinarySearch(size_t size)
{
    std::cout << "MyBinarySearch constructor called and vector size is " << myVector.size() << std::endl;
    myVector.resize(size);
    // Initialize the vector with sorted values for binary search
    for(size_t i = 0; i < size; ++i) {
        myVector[i] = static_cast<int>(i * 3); 
    }
}   

MyBinarySearch::~MyBinarySearch()
{
    std::cout << "MyBinarySearch destructor called." << std::endl;
}

int MyBinarySearch::search(int target)
{
    int left = 0;
    int right = static_cast<int>(myVector.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (myVector[mid] == target) {
            std::cout << "Element " << target << " found at index " << mid << "." << std::endl;
            return mid;
        }
        else if (myVector[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    std::cout << "Element " << target << " not found in the vector." << std::endl;
    return -1; // Element not found
}

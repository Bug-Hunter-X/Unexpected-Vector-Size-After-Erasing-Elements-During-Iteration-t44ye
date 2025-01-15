# Unexpected Vector Size After Erasing Elements During Iteration
This repository demonstrates a common error in C++ when removing elements from a `std::vector` while iterating through it using an index-based for loop.  The issue arises because erasing an element shifts all subsequent elements, invalidating the index used in the loop.  The provided code showcases the problem and its solution.

## Bug Description
The bug is in the `for` loop where elements are erased from the `vec` vector. The `erase` operation modifies the vector size and shifts the elements. This causes the loop to skip elements or potentially access memory out of bounds, leading to unexpected behavior and possibly crashes.

## Solution
The solution demonstrates two better ways of removing elements from a vector during iteration: using iterators and using a reverse iterator.
/**
 * @file SelectionSort.cpp
 * @author your name (you@domain.com)
 * @brief the implementation of the selection sort
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "SelectionSort.hpp"

//this is a different way to build the constructors
template<class T>
SelectionSort<T>::SelectionSort(const bool& ascending):SortingAlgo<T>("Selection Sort", false, ascending ){}

template<class T> 
void SelectionSort<T>::sort(std::vector<T>& list){
    this->comparisons_ =  0;
    this->swaps_ = 0;
    if (list.size() <= 0){
        return;
    }
    else{
        //loop through the list so you can move the smallest/largest to arrange the elements in the 0 position all the way to the list.size()-1 position
        for(int i = 0; i < list.size();i++){
            //collect the index of the min max 
            size_t index_of_the_MinMax_ = findMinMax( list ,i );
            // if the index of the minmax is already at the closest to 0 =i range don't do anything
            //you don't have to do anything because that means that the largest/smallest value is already here.
            if( index_of_the_MinMax_ == i){}
            //swap the spots of the elements so that the largest/smallest is here on the i. 
            else{
                std::swap(list[i], list[index_of_the_MinMax_]);
                this->swaps_++;
            }
        }
    }
}

template <class T>
size_t SelectionSort<T>::findMinMax(const std::vector<T>& list, size_t start) {
    // Initialize the index of the smallest or largest element as the starting index
    size_t minmax = start;
    // Loop through the elements in the list starting from the given start index
    for (size_t i = start; i < list.size(); i++) {
        // Increment the number of comparisons made by the algorithm
        this->comparisons_++;
        // Check if the element at current index 'i' is smaller or larger than the current smallest or largest
        if (this->comparator(list[i], list[minmax])) {
            // If it is smaller or larger, update the index of the smallest or largest element
            minmax = i;
        }
    }
    // Return the index of the smallest or largest element found
    return minmax;
}

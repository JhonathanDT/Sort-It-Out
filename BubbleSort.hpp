/**
 * @file BubbleSort.hpp
 * @author your name (you@domain.com)
 * @brief The interface for the Bubble sort algorithm (child class of Sorting Algo)
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "SortingAlgo.hpp"


template<class T>
class BubbleSort : public SortingAlgo<T>{
    public:
        /**
        * @brief Construct a new Bubble Sort object
        * 
        * @param ascending if true that means the list needs to be sorted in ascending order, if false it needs to be sorted descending order
        *
        * @post the BubbleSort object calls the Sorting Algo constructor and sets the values to name, stable, and ascending
        */
        BubbleSort(const bool& ascending);
        /**
         * @brief arrange the vector list in descending or ascending order depending on the value of the bool ascending.
         * 
         * @param list take in a vector with the values that are to be sorted using the Bubble sort method.
         */
        void sort(std::vector<T>& list) override;
    
};
#include "BubbleSort.cpp"
#endif //BUBBLE_SORT_HPP
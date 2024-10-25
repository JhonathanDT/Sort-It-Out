/**
 * @file InsertionSort.hpp
 * @author Jhonathan Tepan(jhonathan.tepan51@myhunter.cuny.edu)
 * @brief the interface for the insertion sort (child class of sorting algo)
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include "SortingAlgo.hpp"

template<class T>
class InsertionSort : public SortingAlgo<T>{
    public:
        /**
         * @brief Construct a new Insertion Sort object
         * 
         * @param ascending this determines whether list is to be sorted in ascending or descending order
         */
        InsertionSort(const bool& ascending);
        /**
         * @brief this function will be using the insertion algorithm to sort the list.
         it will use a for loop to iterate from the second element to the last element and compare with the previous values and swap along the way
         * 
         * @param list this is the vector that will be sorted.
         */
        void sort(std::vector<T>& list) override;

};
#include "InsertionSort.cpp"
#endif
/**
 * @file QuickSort.hpp
 * @author Jhonathan Tepan(jhonathan.tepan51@myhunter.cuny.edu)
 * @brief the interface for the Quick sort algorithm 
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
// TODO: add include guards
#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP
// TODO: include headers and libraries
#include "SortingAlgo.hpp"
// TODO: add comments for each function

template <class T>
class QuickSort : public SortingAlgo<T>{
    public:
        /**
         * @brief Construct a new Quick Sort object
         * 
         * @param ascending determines whether we are sorting in descending or ascending order
         */
        QuickSort(const bool& ascending);
        /**
         * @brief this function wiill call the quick sort function and sets the swaps and comparisons to 0.
         * 
         * @param list the list of elements we want to sort
         */
        void sort(std::vector<T>& list) override;
    private:
        /**
         * @brief this does a division of labor and recursively calls quicksort on the left (low) side of the vector and calls it on the right (high) side of the vector
         * 
         * @param list the list we are comparing
         * @param low the bottom half of the list
         * @param high the top half of the list
         */
        void quickSort(std::vector<T>& list, int low, int high);
        /**
         * @brief this helps find the pivot that allows for the sorting algorithm to continue swapping based on the pivot
         * 
         * @param list the array/ list we are working with
         * @param low the left side of the pivot which contains items less than the pivot
         * @param high the right side of the pivot which contains items greater than the pivot
         * @return int the index of the pivot
         */
        int partition(std::vector<T>& list, int low, int high);
};
#include "QuickSort.cpp"
#endif //QUICK_SORT_HPP
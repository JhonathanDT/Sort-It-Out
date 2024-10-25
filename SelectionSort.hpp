/**
 * @file SelectionSort.hpp
 * @author Jhonathan Tepan(jhonathan.tepan51@myhunter.cuny.edu)
 * @brief the interface for the Selection sort algorithm 
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "SortingAlgo.hpp"
// TODO: add comments for each function

template <class T>
class SelectionSort : public SortingAlgo<T> {
    public:
        /**
        * @brief Construct a new Selection Sort object
        * 
        * @param ascending used to determine if we are sorting in ascending or descending order
        */
        SelectionSort(const bool& ascending);
        /**
         * @brief arrange the given list in a way that is effieciently sorted. This sorting method just grabs the biggest/smallest element and arranges it so it is in the front. 
         * 
         * @param list gets the list that is to be sorted. 
         */
        void sort(std::vector<T>& list) override;
    private:
        /**
         * @brief finds the smallest/ biggest value in the vector list and returns the position of that element.
         * 
         * @param list the list we will use to check for the Min Max. 
         * @param start this is 
         * @return size_t gives you the index from where in the list to start looking 
         */
        size_t findMinMax(const std::vector<T>& list,size_t start);
};
#include "SelectionSort.cpp"
#endif//SELECTION_SORT_HPP
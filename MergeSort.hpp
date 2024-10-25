/**
 * @file MergeSort.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include "SortingAlgo.hpp"


template <class T>
class MergeSort : public SortingAlgo<T> {
    public:
        /**
         * @brief Construct a new Merge Sort object
         * 
         * @param ascending the value of ascending determines if we are sorting in a descending or ascending
         */
        MergeSort(const bool& ascending);
        /**
         * @brief sets the comparisons and swaps to 0 and calls the mergeSort function .
         * 
         * @param list the vector that is to be sorted
         */
        void sort(std::vector<T>& list) override;
    private:
        /**
         * @brief this function uses both vectors and combines into one where they are arranged based on the ascending bool. 
         * 
         * @param left has the left side of the vector 
         * @param right has the right side of the vector
         * @return std::vector<T> returns a sorted vector 
         */
        std::vector<T> merge(std::vector<T>& left, std::vector<T>& right);
        /**
         * @brief this function uses recursion that allows us to make the vector break in to a vector of one element and than uses the merge function to arrange the element in the correct ascending order. 
         * 
         * @param list the vector that is being checked to see if we can break it downn further.
         * @return std::vector<T> return a vector that got passed through the merge function so now they are arranged in the correct ascending order.
         */
        std::vector<T> mergeSort(std::vector<T>& list);
};

#include "MergeSort.cpp"
#endif
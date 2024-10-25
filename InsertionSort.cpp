/**
 * @file InsertionSort.cpp
 * @author Jhonathan Tepan(jhonathan.tepan51@myhunter.cuny.edu)
 * @brief the implementation for the insertion sort
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "InsertionSort.hpp"

template<class T>
InsertionSort<T>::InsertionSort(const bool& ascending):SortingAlgo<T>("Insertion Sort", true ,ascending){}

template<class T>
void InsertionSort<T>::sort(std::vector<T>& list){
    this->comparisons_ = 0;
    this-> swaps_ = 0;
    for(int i = 1; i < list.size();i++){
        int current_index = i;
        while( (current_index > 0) && (this->comparator(list[current_index],list[current_index-1]) ) ){
            this->comparisons_++;
            this->swaps_++;
            std::swap(list[current_index],list[current_index-1]);
            current_index--;
        }
        this->comparisons_++;
    }
}
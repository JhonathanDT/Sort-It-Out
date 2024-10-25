/**
 * @file BubbleSort.cpp
 * @author Jhonathan Tepan (jhonathan.tepan51@myhunter.cuny.edu)
 * @brief The implementation file for the Bubble sort algorithm
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "BubbleSort.hpp"

template<class T>
BubbleSort<T>::BubbleSort(const bool& ascending):SortingAlgo<T>("Bubble Sort", true ,ascending){}


template<class T>
void BubbleSort<T>::sort(std::vector<T>& list){
    this->comparisons_ = 0;
    this-> swaps_ = 0;
    int size_ = list.size();
    bool swapped_ = true;
    int pass_ =1;
    /**
     * @brief this while loop makes it so we are not iterating and comparing all the way to list.size()-1
     and keep iterating through one less from the original size of the list. This will allow that we push the 
     smallest / biggest element all the way to the end of the list and be considered sorted already.
     * 
     */
    while(swapped_ && (pass_ < size_)){
        swapped_ = false;
        //the for loop will only iterate from 0 to size - pass which will always be the unsorted elements leaving the sorted values as the last elements in the list.
        for(int index=0; index < size_ - pass_; index++){
            if(list[index] != list[index+1] && !(this->comparator(list[index], list[index+1] ))){
                std::swap(list[index],list[index+1]);
                swapped_  = true;
                this->swaps_++;
            }
            this->comparisons_++;
        }
        pass_++;
    }    
}
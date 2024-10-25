/**
 * @file SortingAlgo.cpp
 * @author Jhonathan Tepan(jhonathan.tepan51@myhunter.cuny.edu)
 * @brief  The implementation for the sorting algo
 * @version 0.1
 * @date 2024-07-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "SortingAlgo.hpp"

template<class T>
SortingAlgo<T>::SortingAlgo(const std::string& name, const bool& stable, const bool& ascending){
    
    name_ = name;
    stable_ = stable;
    ascending_ = ascending;
    swaps_ = 0;
    comparisons_ = 0;   
}

template<class T>
void SortingAlgo<T>::setName(const std::string& name){
    name_ = name;
}

template<class T>
void SortingAlgo<T>::setStable(const bool& stable){
    stable_ = stable;
}

template<class T>
void SortingAlgo<T>::setAscending(const bool& ascending){
    ascending_ = ascending; 
}

template<class T>
std::string SortingAlgo<T>::getName() const{
    return name_;
}

template<class T>
bool SortingAlgo<T>::isStable()const{
    return stable_;
}

template<class T>
size_t SortingAlgo<T>::getSwaps()const{
    return swaps_;
}

template<class T>
size_t SortingAlgo<T>::getComparisons() const{
    return comparisons_;
}

template<class T>
bool SortingAlgo<T>::isAscending()const{
    return ascending_;
}

template<class T>
bool SortingAlgo<T>::isSorted(std::vector<T>& list)const{
    bool sorted_ = true;
    //case if the list is empty
    if( list.size() == 0){
        return true;
    }
    if(ascending_){
        for(int i = 0; i < list.size()-1; i++){
            if(list[i] > list[i+1]){
                sorted_ = false;
                return sorted_;
            }
        }
    }
    else{
        for(int i = 0; i < list.size()-1; i++){
            if(list[i] < list[i+1]){
                sorted_ = false;
                return sorted_;
            }
        }
    }
    return sorted_;
}

template <class T>
bool SortingAlgo<T>::comparator(const T& a, const T& b) const {
    return ascending_ ? a < b : a > b;
}

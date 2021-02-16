//
//  ArrayVector.cpp
//  Data Structures
//
#include <iostream>
#include "ArrayVector.hpp"

using namespace std;
/**
 Constructor
 */
template <typename T>
ArrayVector<T>::ArrayVector(){
    // Initialize the size of the array to 0;
    this->count = 0;
    // Initialize the empty capacity of the array to 10;
    this->capacity = 10;
    arr = new T[10];
}

template <typename T>
ArrayVector<T>::ArrayVector(int initial_capacity){
    // Initialize the size of the array to 0;
    this->size = 0;
    // Initialize the empty capacity of the array to 10;
    this->capacity = initial_capacity;
    arr = new T[initial_capacity];
}
/**
 Access functions
 Functions that will access different areas of the Vector
 */
template <typename T>
int ArrayVector<T>::at(int position){
    assert(position>=0 && position<count);
    return 0;
}

template <typename T>
int ArrayVector<T>::front(){
    return 0;
}

template <typename T>
int ArrayVector<T>::back(){
    return 0;
}

/**
 Size related functions
 */
template <typename T>
bool ArrayVector<T>::empty(){
    return true;
}

template <typename T>
int ArrayVector<T>::size(){
    return 0;
}

/**
 Modifier functions
 Functions that will adjust the contents of the Vector
 */
template <typename T>
void ArrayVector<T>::push_back(T element){
    
}

template <typename T>
void ArrayVector<T>::insert(int position, T element){
    
}

template <typename T>
void ArrayVector<T>::swao(int first_position, int second_position){
    
}

template <typename T>
void ArrayVector<T>::clear(){
    
}

template <typename T>
void ArrayVector<T>::popBack(){
    
}

/**
 Visualization
 */
template <typename T>
void ArrayVector<T>::printContents(){
    
}

//
//  LinkedListVector.hpp
//  Data Structures
//
//  Created by Amr Gharseldin on 2/22/21.
//

#ifndef LinkedListVector_hpp
#define LinkedListVector_hpp

#include <stdio.h>
#include <iostream>
#include "Vector.hpp"

using namespace std;

template <typename T>
class LinkedListVector: public Vector<T>{
private:
    DoubleLinkedList<T> *list;
public:
    /**
     Constructors
     */
    LinkedListVector(){
        
    };
    
    /**
     Access functions
     Functions that will access different areas of the Vector
     */
    T &operator[](const int index) override{
        return NULL;
    }
    
    T at(int index) override{
        return NULL;
    };
    
    T front() override{
        return NULL;
    };
    
    T back() override{
        return NULL;
    };
    
    /**
     Size related functions
     */
    bool empty() override{
        return false;
    };
    int size() override{
        
    };
    void reSize() override{
        // Not required in this implementation
    }
    /**
     Modifier functions
     Functions that will adjust the contents of the Vector
     */
    void push_back(T element) override{
       
    };
    
    void insert(int position, T element) override{
       
    };
    
    void swap(int first_position, int second_position) override{
       
    };
    
    void clear() override{
    
    };
    
    void popBack() override{
       
    };
    
    /**
     Visualization
     */
    void printContents() override{
        list->printContentsWithoutSentinals();
    };
};

#endif /* LinkedListVector_hpp */

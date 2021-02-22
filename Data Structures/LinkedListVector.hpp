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
        return at(index);
    }
    
    T at(int index) override{
        return list->at(index);
    };
    
    T front() override{
        return list->front();
    };
    
    T back() override{
        return list->back();
    };
    
    /**
     Size related functions
     */
    bool empty() override{
        return list->empty();
    };
    int size() override{
        return list->size();
    };
    void reSize() override{
        // Not required in this implementation
    }
    /**
     Modifier functions
     Functions that will adjust the contents of the Vector
     */
    void push_back(T element) override{
        list->addBack(element);
    };
    
    void insert(int position, T element) override{
        list->addAt(position, element);
    };
    
    void swap(int first_position, int second_position) override{
        list->swap(first_position, second_position);
    };
    
    void clear() override{
        list->clear();
    };
    
    void popBack() override{
        list->removeBack();
    };
    
    /**
     Visualization
     */
    void printContents() override{
        list->printContentsWithoutSentinals();
    };
};

#endif /* LinkedListVector_hpp */

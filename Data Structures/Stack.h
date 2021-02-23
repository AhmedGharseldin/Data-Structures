//
//  Stack.h
//  Data Structures
//
//  Created by Ahmed Gharseldin on 23/02/2021.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
class Stack: public DoubleLinkedList<T> {
    DoubleLinkedList<T> *list;
public:
    
    Stack(){
        list = new DoubleLinkedList<T>();
    };
    void push_back(T t){
        list->addBack(t);
    }
    bool empty(){
        return list->empty();
    }
    void pop_back(){
        list->removeBack();
    }
    int size(){
        return list->size();
    }
    T back(){
        return list->back();
    }
    T front(){
        return list->front();
    }
    void printContents(){
        list->printContentsWithoutSentinals();
    }
};

#endif /* Stack_h */

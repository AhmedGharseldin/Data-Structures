//
//  Queue.h
//  Data Structures
//
//  Created by Ahmed Gharseldin on 23/02/2021.
//

#ifndef Queue_h
#define Queue_h

#include <iostream>

using namespace std;

template <typename T>
class Queue {
    DoubleLinkedList<T> *list;
public:
    Queue(){
        list = new DoubleLinkedList<T>();
    }
    
    bool empty(){
        return list->empty();
    }
    int size(){
        return list->size();
    }
    T front(){
        return list->front();
    }
    T back(){
        return list->back();
    }
    void push_back(T t){
        list->addBack(t);
    }
    void pop_front(){
        list->removeFront();
    }
    void printContents(){
        list->printContentsWithoutSentinals();
    }
};



#endif /* Queue_h */

//push_back
//pop_front

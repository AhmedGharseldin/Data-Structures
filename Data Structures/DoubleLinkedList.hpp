//
//  DoubleLinkedList.hpp
//  Data Structures
//
//  Created by Amr Gharseldin on 2/19/21.
//

#ifndef DoubleLinkedList_hpp
#define DoubleLinkedList_hpp

#include <stdio.h>
#include "Node.hpp"

template <typename E>
class DoubleLinkedList {

private:
    Node<E> *head;
    Node<E> *tail;
    int count;

public:
    DoubleLinkedList(){
        // Initialize head, tail and size
        
    };
    
    E front(){
        
    };
    
    E back(){
        
    };
    
    void addFront(E e){
        
    };
    
    void addBack(E e){
        
    };
    
    void removeFront(){
        
    };
    
    void removeBack(){
        
    };
    
    void swap(int firstPosition, int secondPosition){
        
    };
    
    int size(){
        
    };
    
    bool empty(){
        
    };
    
    void clear(){
        
    };

    E at(){
        
    }
    
    E operator[](const int index){
        
    }
    
    // Add an element after a certain node
    void addAt(int position, E e){
        
    };
    
    // Remove a sepcific node
    void remove(int index){
        
    };

    void printContents(){
        cout<<"[Head] <=> ";
        Node<E> *cursor = head;
        while(cursor->next != tail){
            cout<<"["<<cursor->data<<"] <=> ";
            cursor = cursor->next;
        }
        cout<<"[Tail]\n";
    };
};

#endif /* DoubleLinkedList_hpp */

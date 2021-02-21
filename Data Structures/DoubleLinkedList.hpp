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
    Node<E> *head = NULL;
    Node<E> *tail = NULL;
    int count;
    
public:
    DoubleLinkedList(){
        
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

    E at(int position){

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
        Node<E> *cursor = head;
        cout<<"Forward connections - ";
        cout<<"[Head] => ";
        while(cursor->next != tail){
            cursor = cursor->next;
            cout<<"["<<cursor->data<<"] => ";
        }
        cout<<"[Tail]\n";
        cursor = cursor->next;
        cout<<"Backward connections - ";
        cout<<"[Tail] => ";
        while(cursor->prev != head){
            cursor = cursor->prev;
            cout<<"["<<cursor->data<<"] => ";
        }
        cout<<"[Head]\n";
    };
};

#endif /* DoubleLinkedList_hpp */

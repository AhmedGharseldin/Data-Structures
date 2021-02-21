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

    void addBetween(Node<E> *before, Node<E> *after, E e){
        Node<E> *temp = new Node<E>();
        temp->data = e;
        // set the connection before the node
        before->next = temp;
        temp->prev = before;
        
        // set the connection after the node
        after->prev = temp;
        temp->next = after;
    }
    
public:
    DoubleLinkedList(){
        // Initialize head, tail and size
        head = new Node<E>();
        tail = new Node<E>();
        head->data = -1;
        tail->data = -1;
        head->next = tail;
        tail->prev = head;
        count = 0;
    };
    
    E front(){
        return head->next->data;
    };
    
    E back(){
        return tail->prev->data;
    };
    
    void addFront(E e){
        addBetween(head, head->next, e);
        count++;
    };
    
    void addBack(E e){
        addBetween(tail->prev, tail, e);
        count++;
    };
    
    void removeFront(){
        //Check if its empty first.
        if(count == 0)
            return;
        head->next = head->next->next;
        head->next->prev = head;
        count--;
    };
    
    void removeBack(){
        if(count == 0)
            return;
        tail->back = tail->back->back;
        tail->back->next = tail;
        count--;
    };
    
    void swap(int firstPosition, int secondPosition){
        Node<E> *first = head;
        for(int i=0; i<=firstPosition; i++)
            first = first->next;
        Node<E> *second = head;
        for(int i=0; i<=secondPosition; i++)
            second = second->next;
        E temp = first->data;
        first->data = second->data;
        second->data = temp;
    };
    
    int size(){
        return count;
    };
    
    bool empty(){
        return count == 0;
    };
    
    void clear(){
        head = new Node<E>();
        tail = new Node<E>();
        head->data = -1;
        tail->data = -1;
        head->next = tail;
        tail->prev = head;
        count = 0;
    };

    E at(int position){
        if(position>count)
            return NULL;
        // Hop to the position
        Node<E> *cursor = head;
        for(int i=0; i<=position; i++)
            cursor = cursor->next;
        return cursor->data;
    }
    
    E operator[](const int index){
        if(index>count)
            return NULL;
        // Hop to the position
        Node<E> *cursor = head;
        for(int i=0; i<=index; i++)
            cursor = cursor->next;
        return cursor->data;
    }
    
    // Add an element after a certain node
    void addAt(int position, E e){
        // Hop to the position
        Node<E> *cursor = head;
        for(int i=0; i<=position; i++)
            cursor = cursor->next;
        addBetween(cursor->prev, cursor, e);
        count++;
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

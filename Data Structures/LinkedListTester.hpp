//
//  LinkedListTester.hpp
//  Data Structures
//
//  Created by Amr Gharseldin on 2/19/21.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp
#include <iostream>
#include <stdio.h>
#include "DoubleLinkedList.hpp"

using namespace std;

template <typename T>
class LinkedListTester{
private:
    DoubleLinkedList<int> *list;
    
    /**
     Testing the print function
     Should print an empty LinkedList
     */
    void testPrint(){
        cout<<"Testing the print function\n";
        cout<<"Should print an empty LinkedList\n";
        list->printContents();
        cout<<"\n---------------------------------------\n\n";
    }
    
    /**
     Testing the addFront  functionality
     Should add numbers from 1 to 5 to the front of the linked list
     */
    void testAddFront(){
        cout<<"Testing the addFront functionality\n";
        cout<<"Should add numbers from 1 to 5 to the LinkedList\n";
        for(int i=5; i>=1; i--)
            list->addFront(i);
        list->printContents();
        cout<<"\n---------------------------------------\n\n";
    }
    
    /**
    Testing addBack functinoality
    Should add the numbers  6-10 from the back
    */
    void testAddBack(){
        cout<<"Testing addBack functinoality\n";
        cout<<"Should add the numbers  6-10 from the back of the LinkedList\n";
        for(int i=6; i<=10; i++)
            list->addBack(i);
        list->printContents();
        cout<<"\n---------------------------------------\n\n";
    }
    
    /**
    Testing at(int index) functionality
    Should find the correct element at the specified index
    */
    void testAtIndex(){
        cout<<"Testing at(int index) functionality\n";
        cout<<"Should find the correct element at the specified index\n";
        for(int i = 0; i<list->size(); i++)
            cout<<"Element at index "<<i<<" = "<<list->at(i)<<endl;
        cout<<"\n---------------------------------------\n\n";
    }
    

    /**
     Testing the [ ] operator
     Should print elements at all indecies
     */
    void testSquareBracketOperator(){
        cout<<"Testing the [ ] operator\n";
        cout<<"Should print elements at all indecies\n";
        for(int i = 0; i<list->size(); i++)
            cout<<"Element at index "<<i<<" = "<<list->operator[](i)<<endl;
        cout<<"\n---------------------------------------\n\n";
    }
    
    /**
     Testing front() and back()
     Should print the front element and back element
     */
    void testFrontAndBack(){
        cout<<"Testing front() and back()\n";
        cout<<"Should print the front element and back element\n";
        cout<<"Element at the front of the vector = "<<list->front()<<endl;
        cout<<"Element at the back of the vector = "<<list->back()<<endl;
        cout<<"\n---------------------------------------\n\n";
    }
    
    /**
     Testing swap functionality
     Should swap the first and second element
     */
    void testSwap(){
        cout<<"Testing swap functionality\n";
        cout<<"Should swap the first and second element\n";
        list->swap(0, 1);
        list->printContents();
        cout<<"\n---------------------------------------\n\n";
    }
    
    /**
     Testing addAt functionality
     should insert number 99  at position 2
     */
    void testAddAt(){
        cout<<"Testing insert functionality\n";
        cout<<"should insert number 99  at position 2\n";
        list->addAt(2, 99);
        list->printContents();
        cout<<"\n---------------------------------------\n\n";
    }
    
    /**
     Testing empty, size and clear functionality
     */
    void testEmptySizeClear(){
        cout<<"Testing empty, size and clear functionality\n";
        cout<<"Current Array\n";
        list->printContents();
        cout<<"Current size of the Linked List is = "<<list->size()<<endl;
        cout<<"Current Linked List is empty = "<<(list->empty()?"True":"False")<<endl;
        cout<<"# running clear()"<<endl;
        list->clear();
        list->printContents();
        cout<<"Current size of the Linked List is = "<<list->size()<<endl;
        cout<<"Current Linked List is empty = "<<(list->empty()?"True":"False")<<endl;
        cout<<"\n---------------------------------------\n\n";
    }
    
public:
    LinkedListTester<T>(DoubleLinkedList<T> *list){
        this->list = list;
    }
    
    void performTestSuite(){
        testPrint();
        testAddFront();
        testAddBack();
        testAtIndex();
        testSquareBracketOperator();
        testFrontAndBack();
        testSwap();
        testAddAt();
        testEmptySizeClear();
    }
};
#endif /* LinkedListTester_hpp */

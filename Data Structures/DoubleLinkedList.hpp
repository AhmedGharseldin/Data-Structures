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
class DoubleLinkedList
{

private:
    Node<E> *head = NULL;
    Node<E> *tail = NULL;
    int count = 0;
    //....DID NOT WORK....///
//    Node<E> findNode(int index)
//    {
//        Node<E> *current = head;
//        for (int i = 0; current != NULL; i++)
//        {
//            if (i == index)
//                break;
//            else
//                current = current->next;
//        }
//        return current;
//    };

public:
    DoubleLinkedList()
    {
        // In your case where there are no head and tail sentinals we don't really need a constructor
        // so you can ignore this.
//        Node<E> *temp = new Node<E>();
//        temp->next = NULL;
//        temp->prev = NULL;
//        head = tail = NULL;
    };

    E front()
    {
        // LGTM (this means Looks good to me, you will typically see this in code reviews when you start working)
        assert(head != NULL);
        return head->data;
    };

    E back()
    {
        // LGTM
        assert(tail != NULL);
        return tail->data;
    };

    void addFront(E e)
    {
        
        if (head)
        {
            // you forgot to add the data here to make it e
            Node<E> *temp = new Node<E>();
            temp->data = e;
            temp->next = head;
            temp->prev = NULL;
            // you meant to write this the other way round
            // head->prev = temp;
            // Other than that it all looks perfect
            // You will see that its breaking the test. Fix it and it will work
            head->prev = temp;
            head = temp;
            count++;
        }
        else //first node
        {
            Node<E> *temp = new Node<E>();
            temp->data = e;
            temp->next = NULL;
            temp->prev = NULL;
            head = tail = temp;
            count++;
        }
    };

    void addBack(E e)
    {
        if (head)
        {
            Node<E> *temp = new Node<E>();
            temp->data = e;
            temp->next = NULL;
            temp->prev = tail;
            // See you did it right here as opposed to up there in the add front
            // where you said - temp = head->prev;
            tail->next = temp;
            tail = temp;
            count++;
        }
        else
        {
            // very cool reuse of functions
            addFront(e);
        }
    };

    void removeFront()
    {
        assert(count > 0);
        head = head->next;
        head->prev = NULL;
        count--;
    };

    void removeBack()
    {
        assert(count > 0);
        tail = tail->prev;
        tail->next = NULL;
        count--;
    };

    void swap(int firstPosition, int secondPosition){
        assert((firstPosition >= 0 && firstPosition <= count) && (secondPosition >= 0 && secondPosition <= count));
        Node<E> *firstNode = head;
        Node<E> *secondNode = head;
        for (int i = 0; i< firstPosition; i++)
            firstNode = firstNode->next;
        for (int i = 0; i< secondPosition; i++)
            secondNode = secondNode->next;
        E temp = firstNode->data;
        firstNode->data = secondNode->data;
        secondNode->data = temp;
        // Not sure what you did here. But you want to swap the firstPosition with another second position
        // for example  swap(5, 1)  means I want to swap the value of index 5 with the value in index 1
        // so you must search for second Node the same way you searched for firstNode then swap values
//        firstNode->next = secondNode->next;
//        secondNode->prev = firstNode->prev;
//        firstNode->prev = secondNode;
//        secondNode->next = firstNode;
    };
 
    // Perfect
    int size()
    {
        return count;
    };

    // Perfect
    bool empty()
    {
        return (!count);
    };

    // Perfect
    void clear()
    {
        head->next = NULL;
        tail->prev = NULL;
        head = tail = NULL;
        count = 0;
    };

    E at(int position)
    {
        assert(position >= 0 && position <= count);
        Node<E> *current = head;
        // When looking for a node, since you made the assertion at the beginning you can do the following
        /**
         for(int i=1; i<=position; i++)
             current = current->next;
         if its index zero it will never move
         if its index 1 it will move once
         if its index 2 it will move twice etc.
         */
        for (int i = 0; current != NULL; i++)
        {
            if (i == position)
                break;
            else
                current = current->next;
        }
        return current->data;
    }

    E operator[](const int index)
    {
        // Cool reuse of functions. I like that
        return at(index);
    }

    // Add an element after a certain node
    void addAt(int position, E e)
    {
        assert(position >= 0 && position <= count);
        if (position == count)
            addBack(e);
        else
        {
            Node<E> *previousNode = head;
            for (int i = 0; previousNode != NULL; i++)
            {
                if (i == position)
                    break;
                else
                    previousNode = previousNode->next;
            }
            Node<E> *insertNode = new Node<E>();
            insertNode->data = e;
            insertNode->next = previousNode->next;
            insertNode->prev = previousNode;
            previousNode->next = insertNode;
            previousNode->next->prev = insertNode;
            count++;
        }
    };

    // Remove a specific node
    void remove(int index)
    {
        assert(index > 0 && index <= count);
        if (index == 0)
            removeBack();
        else if (index == count)
            removeFront();
        else
        {
            Node<E> *deleteNode = head;
            for (int i = 0; i<= index; i++)
            {
                    deleteNode = deleteNode->next;
            }
            deleteNode->prev = deleteNode->next;
            deleteNode->next = deleteNode->prev;
            delete deleteNode;
        }
    };

    void printContentsWithoutSentinals(){
        if(count == 0){
            cout<<"Forward connections - ";
            cout<<"[Head] => NULL <= [Tail]\n";
            cout<<"Backward connections - ";
            cout<<"[Tail] => NULL <= [Head]\n";
            return;
        }
        
        // Print one way to check forward connections
        Node<E> *cursor = head;
        cout<<"Forward connections - [Head] ";
        while(cursor != tail){
            cout<<"=> ["<<cursor->data<<"]";
            cursor = cursor->next;
        }
        cout<<"=> ["<<cursor->data<<"] <= [Tail]\n";
        
        // Print the other way to check backward connections
        cout<<"Backward connections - [Tail] ";
        while(cursor != head){
            cout<<"=> ["<<cursor->data<<"]";
            cursor = cursor->prev;
        }
        cout<<"=> ["<<cursor->data<<"] <= [Head]\n";
    }
    
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

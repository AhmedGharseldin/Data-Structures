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
        Node<E> *temp = new Node<E>();
        temp->next = NULL;
        temp->prev = NULL;
        head = tail = NULL;
    };

    E front()
    {
        assert(head != NULL);
        return head->data;
    };

    E back()
    {
        assert(tail != NULL);
        return tail->data;
    };

    void addFront(E e)
    {
        if (head)
        {
            Node<E> *temp = new Node<E>();
            temp->next = head;
            temp->prev = NULL;
            temp = head->prev;
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
            tail->next = temp;
            tail = temp;
            count++;
        }
        else
        {
            addFront(e);
        }
    };

    void removeFront()
    {
        assert(count > 0);
        head = head->next;
        head->prev = NULL;
        count--;
        Node<E> *current = head;
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
        for (int i = 0; firstNode != NULL; i++)
        {
            if (i == firstPosition)
                break;
            else
                firstNode = firstNode->next;
        }
        Node<E> *secondNode = firstNode->next;
        firstNode->next = secondNode->next;
        secondNode->prev = firstNode->prev;
        firstNode->prev = secondNode;
        secondNode->next = firstNode;
    };
 
    int size()
    {
        return count;
    };

    bool empty()
    {
        return (!count);
    };

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
            for (int i = 0; deleteNode != NULL; i++)
            {
                if (i == index)
                    break;
                else
                    deleteNode = deleteNode->next;
            }
            deleteNode->prev = deleteNode->next;
            deleteNode->next = deleteNode->prev;
            delete deleteNode;
        }
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

//
//  QueueTester.h
//  Data Structures
//
//  Created by Ahmed Gharseldin on 23/02/2021.
//

#ifndef QueueTester_h
#define QueueTester_h
#include "Queue.h"

template<typename T>
class QueueTester{
    Queue<T> *q;
    
    void testPrint()
    {
        cout << "Testing the print function\n";
        cout << "Should print an empty queue\n";
        q->printContents();
        cout << "\n---------------------------------------\n\n";
    }

    void testPushBack()
    {
        cout << "Testing push_back functionality\n";
        cout << "should add numbers from 10 to 100 to the stack\n";
        for (int i = 10; i < 110; i += 10)
            q->push_back(i);
        q->printContents();
        cout << "\n---------------------------------------\n\n";
    }

    void testPopFront()
    {
        cout << "Testing popBack functionality\n";
        cout << "Should remove the first 3 elements from the queue\n";
        for (int i = 0; i < 3; i++)
            q->pop_front();
        q->printContents();
        cout << "\n---------------------------------------\n\n";
    }
    
    void testFrontAndBack(){
        cout<<"Testing front() and back()\n";
        cout<<"Should print the front element and back element\n";
        cout<<"Element at the front of the queue = "<<q->front()<<"\n";
        cout<<"Element at the back of the queue = "<<q->back()<<"\n";
        cout<<"\n---------------------------------------\n\n";
    }
    
    void testEmptySizeOfStack(){
        cout<<"Testing empty and size functionality\n";
        cout << "Current Stack\n";
        q->printContents();
        cout<<"Current size of the queue is = "<<q->size()<<"\n";
        cout<<"Current queue is empty "<<(q->empty()?"True":"False")<<"\n";
        cout<<"\n---------------------------------------\n\n";
    }
public:
    QueueTester(Queue<T> *Q){
        this->q = Q;
    }
    
    void testingQueue(){
        testPrint();
        testPushBack();
        testPopFront();
        testFrontAndBack();
        testEmptySizeOfStack();
    }
};

#endif /* QueueTester_h */

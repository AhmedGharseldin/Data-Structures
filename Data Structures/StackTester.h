//
//  StackAndQueueTester.h
//  Data Structures
//
//  Created by Ahmed Gharseldin on 23/02/2021.
//

#ifndef StackAndQueueTester_h
#define StackAndQueueTester_h
#include "Stack.h"

template <typename T>
class StackTester
{
    Stack<T> *s;

    void testPrint()
    {
        cout << "Testing the print function\n";
        cout << "Should print an empty stack\n";
        s->printContents();
        cout << "\n---------------------------------------\n\n";
    }

    void testPushBack()
    {
        cout << "Testing push_back functionality\n";
        cout << "should add numbers from 10 to 100 to the stack\n";
        for (int i = 10; i < 110; i += 10)
            s->push_back(i);
        s->printContents();
        cout << "\n---------------------------------------\n\n";
    }

    void testPopBack()
    {
        cout << "Testing popBack functionality\n";
        cout << "Should remove the last 3 elements from the stack\n";
        for (int i = 0; i < 3; i++)
            s->pop_back();
        s->printContents();
        cout << "\n---------------------------------------\n\n";
    }
    
    void testFrontAndBack(){
        cout<<"Testing front() and back()\n";
        cout<<"Should print the front element and back element\n";
        cout<<"Element at the front of the stack = "<<s->front()<<"\n";
        cout<<"Element at the back of the stack = "<<s->back()<<"\n";
        cout<<"\n---------------------------------------\n\n";
    }
    
    void testEmptySizeOfStack(){
        cout<<"Testing empty and size functionality\n";
        cout << "Current Stack\n";
        s->printContents();
        cout<<"Current size of the stack is = "<<s->size()<<"\n";
        cout<<"Current stack is empty "<<(s->empty()?"True":"False")<<"\n";
        cout<<"\n---------------------------------------\n\n";
    }
public:
    StackTester(Stack<T> *S){
        this->s = S;
    }
    
    void testingStack(){
        testPrint();
        testPushBack();
        testPopBack();
        testFrontAndBack();
        testEmptySizeOfStack();
    }
};
#endif /* StackAndQueueTester_h */


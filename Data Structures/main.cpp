//
//  main.cpp
//  Data Structures
//
//  Created by Ahmed Gharseldin on 09/02/2021.
//

#include <iostream>
#include "Vector.hpp"
#include "ArrayVector.hpp"
#include "VectorTester.h"
#include "DoubleLinkedList.hpp"
#include "LinkedListTester.hpp"
#include "LinkedListVector.hpp"
#include "Stack.h"
#include "Queue.h"
#include "StackTester.h"
#include "QueueTester.h"

using namespace std;

int main() {
    
    /**
     Initialization and assigning to the parent Vector class
     */
//    Vector<int> *vec;
//    ArrayVector<int> arrayVec;
//    LinkedListVector<int> listVector;
//    vec = &listVector;
    
//    ˇVectorTester<int> tester(vec);
//    tester.performTestSuite();
//
//    DoubleLinkedList<int> *list = new DoubleLinkedList<int>();
//    LinkedListTester<int> *linkedListTester = new ::LinkedListTester<int>(list);
//    linkedListTester->performTestSuite();
    
//____________________________________
    
//    Stack<int> *S = new Stack<int>;
//    StackTester<int> *StackTester = new::StackTester<int>(S);
//    StackTester->testingStack();
//____________________________________
    
    Queue<int> *Q = new Queue<int>;
    QueueTester<int> *QueueTester = new::QueueTester<int>(Q);
    QueueTester->testingQueue();
}

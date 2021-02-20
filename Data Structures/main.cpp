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

using namespace std;

int main() {
    
    /**
     Initialization and assigning to the parent Vector class
     */
    Vector<int> *vec;
    ArrayVector<int> arrayVec;
    vec = &arrayVec;
    
    VectorTester<int> tester(vec);
    tester.performTestSuite();
    
    DoubleLinkedList<int> list;
    
    list.printContents();
    
    
}

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

using namespace std;

int main() {
    
    /**
     Initialization and assigning to the parent Vector class
     */
    Vector<int> *vec;
    ArrayVector<int> arrayVec;
    vec = &arrayVec;
    
    VectorTester<int> tester(vec);
}

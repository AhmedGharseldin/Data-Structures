//
//  ArrayVector.hpp
//  Data Structures
//

#ifndef ArrayVector_hpp
#define ArrayVector_hpp

#include <stdio.h>
#include "Vector.hpp"

template <typename T>
class ArrayVector: public Vector<T>{
private:
    T *arr;
    int capacity;
    int count;
    
public:
    ArrayVector();
    ArrayVector(int initial_capacity);
    /**
     Access functions
     Functions that will access different areas of the Vector
     */
    int at(int position) override;
    int front() override;
    int back() override;
    
    /**
     Size related functions
     */
    bool empty() override;
    int size() override;
    
    /**
     Modifier functions
     Functions that will adjust the contents of the Vector
     */
    void push_back(T element) override;
    void insert(int position, T element) override;
    void swao(int first_position, int second_position) override;
    void clear() override;
    void popBack() override;
    
    /**
     Visualization
     */
    void printContents() override;
};
#endif /* ArrayVector_hpp */

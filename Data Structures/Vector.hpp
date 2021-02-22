//
//  Vector.hpp
//  Data Structures
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>

template <typename T>
class Vector{
public:
    
    /**
     Access functions
     Functions that will access different areas of the Vector
     */
//    virtual T &operator[](const int index) = 0;
    virtual int at(int position) = 0;
    virtual int front() = 0;
    virtual int back() = 0;
    
    /**
     Size related functions
     */
    virtual bool empty() = 0;
    virtual int size() = 0;
    virtual void reSize() = 0;
    /**
     Modifier functions
     Functions that will adjust the contents of the Vector
     */
    virtual void push_back(T element) = 0;
    virtual void insert(int position, T element) = 0;
    virtual void swap(int first_position, int second_position) = 0;
    virtual void clear() = 0;
    virtual void popBack() = 0;
    
    /**
     Visualization
     */
    virtual void printContents() = 0;
    
};
#endif /* Vector_hpp */

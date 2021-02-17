//
//  ArrayVector.hpp
//  Data Structures
//

#ifndef ArrayVector_hpp
#define ArrayVector_hpp

#include <stdio.h>
#include <iostream>
#include "Vector.hpp"

using namespace std;

template <typename T>
class ArrayVector: public Vector<T>{
private:
    T *arr;
    int capacity;
    int count;
    
public:
    /**
     Constructors
     */
    ArrayVector(){

    };
    
    ArrayVector(int initial_capacity){

    };
    
    /**
     Access functions
     Functions that will access different areas of the Vector
     */
    T &operator[](const int index) override{

    }
    
    T at(int index) override{

    };
    
    T front() override{

    };
    
    int back() override{

    };
    
    /**
     Size related functions
     */
    bool empty() override{

    };
    int size() override{

    };
    
    /**
     Modifier functions
     Functions that will adjust the contents of the Vector
     */
    void push_back(T element) override{

    };
    
    void insert(int position, T element) override{
        
    };
    
    void swap(int first_position, int second_position) override{

    };
    
    void clear() override{

    };
    
    void popBack() override{

    };
    
    /**
     Visualization
     */
    void printContents() override{
        cout<<"[ ";
        for(int i=0; i<count; i++)
            cout<<arr[i]<<(i==count-1?"":",");
        cout<<" ]\n";
    };
};
#endif /* ArrayVector_hpp */

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
        arr = new T [1];
        capacity = 1;
        count = 0;
    };
    
    ArrayVector(int initial_capacity){
        arr = new T [initial_capacity];
        capacity = initial_capacity;
        count = initial_capacity -1;
    };
    
    /**
     Access functions
     Functions that will access different areas of the Vector
     */
    T &operator[](const int index) override{
        assert(index >= 0 && index < count);
        return arr[index];
    }
    
    T at(int index) override{
        assert(index >= 0 && index < count);
        return arr[index];
    };
    
    T front() override{
        return arr[0];
    };
    
    T back() override{
        assert (count > 0);
        return arr[count-1];
    };
    
    /**
     Size related functions
     */
    bool empty() override{
        return count==0?true:false;
    };
    int size() override{
        return count;
    };
    void reSize() override{
        T *temp = new T[2 * capacity];
        for (int i = 0; i < capacity; i ++){
            temp[i] = arr[i];
        }
        capacity *= 2;
        delete[] arr;
        arr = temp;
    }
    
    /**
     Modifier functions
     Functions that will adjust the contents of the Vector
     */
    void push_back(T element) override{
        if (count == capacity)
            reSize();
        arr[count] = element;
        count++;
    };
    
    void insert(int position, T element) override{
        if (count == capacity)
            reSize();
        for (int i = count; i > position-1; i--)
            arr[i] = arr[i-1];
        arr[position-1] = element;
        count++;
    };
    
    void swap(int first_position, int second_position) override{
        T temp = arr[first_position];
        arr[first_position] = arr[second_position];
        arr[second_position] = temp;
    };
    
    void clear() override{
        count = 0;
    };
    
    void popBack() override{
        assert (count > 0);
        count--;
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

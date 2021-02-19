//
//  VectorTester.h
//  Data Structures
//
//  Created by Amr Gharseldin on 2/18/21.
//

#include "Vector.hpp"

#ifndef VectorTester_h
#define VectorTester_h
template <typename T>
class VectorTester{
private:
    Vector<T> *v;
    
    void performTestSuite(){
    /**
         Testing the print function
         Should print an empty array
         */
        cout<<"Testing the print function\n";
        cout<<"Should print an empty array\n";
        v->printContents();
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing the push_back functionality
         Should add numbers from 1 to 10 to the vector
         */
        cout<<"Testing the push_back functionality\n";
        cout<<"Should add numbers from 1 to 10 to the vector\n";
        for(int i=1; i<=10; i++)
            v->push_back(i);
        v->printContents();
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing popBack functinoality
         Should remove the last 3 elements from the vector
         */
        cout<<"Testing popBack functinoality\n";
        cout<<"Should remove the last 3 elements from the vector\n";
        for(int i=0; i<3; i++)
            v->popBack();
        v->printContents();
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing at(int index) functionality
         Should find the correct element at the specified index
         */
        cout<<"Testing at(int index) functionality\n";
        cout<<"Should find the correct element at the specified index\n";
        for(int i = 0; i<v->size(); i++)
            cout<<"Element at index "<<i<<" = "<<v->at(i)<<endl;
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing the [ ] operator
         Should print elements at all indecies
         
        cout<<"Testing the [ ] operator\n";
        cout<<"Should print elements at all indecies\n";
        for(int i = 0; i<v->size(); i++)
            cout<<"Element at index "<<i<<" = "<<av[i]<<endl;
        cout<<"\n---------------------------------------\n\n";
        */
        
        /**
         Testing front() and back()
         Should print the front element and back element
         */
        cout<<"Testing front() and back()\n";
        cout<<"Should print the front element and back element\n";
        cout<<"Element at the front of the vector = "<<v->front()<<endl;
        cout<<"Element at the back of the vector = "<<v->back()<<endl;
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing swap functionality
         Should swap the first and second element
         */
        cout<<"Testing swap functionality\n";
        cout<<"Should swap the first and second element\n";
        v->swap(0, 1);
        v->printContents();
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing insert functionality
         should insert number 99  at position 2
         */
        cout<<"Testing insert functionality\n";
        cout<<"should insert number 99  at position 2\n";
        v->insert(2, 99);
        v->printContents();
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing empty, size and clear functionality
         */
        cout<<"Testing empty, size and clear functionality\n";
        cout<<"Current Array\n";
        v->printContents();
        cout<<"Current size of the array is = "<<v->size()<<endl;
        cout<<"Current vector is empty = "<<(v->empty()?"True":"False")<<endl;
        cout<<"# running clear()"<<endl;
        v->clear();
        v->printContents();
        cout<<"Current size of the array is = "<<v->size()<<endl;
        cout<<"Current vector is empty = "<<(v->empty()?"True":"False")<<endl;
        cout<<"\n---------------------------------------\n\n";
        
        /**
         Testing edge cases
         now that the vector is empty we should handle those edge cases
         all these cases should fail with an empty vector. Try them out.
         */
        
    //    v->front();
    //    v->back();
    //    v->at(1);
    //    v->insert(2, 11);
    //    v->popBack();
    //    v->swap(1, 2);
    }
public:
    VectorTester(Vector<T> *vec){
        this->v = vec;
    }
};
#endif /* VectorTester_h */

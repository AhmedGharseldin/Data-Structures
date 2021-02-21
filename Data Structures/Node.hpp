//
//  Node.hpp
//  Data Structures
//
//  Created by Amr Gharseldin on 2/19/21.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
template <typename E>
class Node{
public:
    E data;
    Node *next;
    Node *prev;
};
#endif /* Node_hpp */

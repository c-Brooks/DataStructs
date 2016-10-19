//
//  LinkedList.hpp
//  DataStructs
//
//  Created by Corey on 17 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//

#ifndef linkedList_hpp
#define linkedList_hpp

#include <stdio.h>

// Eventually, multiple types will be supported
typedef int Type;

class Node;


class List {
    
public:
    List() { list = 0; }
    ~List() { remove(); }

    void remove();
    
    void remove(Type); // Removes ALL instances of the element
    void push(Type);
    void pop();
    
    int getLength();
    
private:
    Node *list;
};


class Node {
    friend class List;
private:
    Node(Type value, Node *node) {
        val = value; next = node;
    }
    Type val;
    Node *next;
};



#endif /* linkedList_hpp */

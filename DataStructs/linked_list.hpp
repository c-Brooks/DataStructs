//
//  linked_list.hpp
//  DataStructs
//
//  Created by Corey on 17 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include <stdio.h>

// Eventually, multiple types will be supported
typedef int Type;

class Node;


class List {

public:
    List() { list = 0; }
    ~List() { remove(); }

    void remove();     // Deletes the whole List

    void remove(Type); // Removes ALL instances of the element
    void insert(Type);
    void pop();
    void push(Type);

    Type get(int index);
    int  getLength();   // Used for testing purposes

private:
    Node *list;
};


class Node {
    friend class List;

private:
    // A node represents one element in the list
    Node(Type value, Node *node) {
        val = value; next = node;
    }
    Type val;
    Node *next;
};

#endif /* linkedList_hpp */

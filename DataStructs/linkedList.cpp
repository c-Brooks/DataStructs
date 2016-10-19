//
//  LinkedList.cpp
//  DataStructs
//
//  Created by Corey on 17 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//

#include "linkedList.hpp"
#include <assert.h>

// LIST
void List::remove() {
    Node *pt = list;

    while(pt) {
        Node *temp = pt;
        pt = pt->next;
        delete temp;
    }
}



void List::remove(Type val) {
    
}


void List::insert(Type val) {
    Node *pt = new Node(val, list);
    assert(pt != 0); // Make sure we have enough memory
    list = pt;
}

int List::getLength() {
    if (list == 0){
        return 0;
    } else {
        Node *pt = list; int count = 0;
        while (pt) {
            pt = pt->next;
            count++;
        }
        return count;
    }
}




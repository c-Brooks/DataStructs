//
//  LinkedList.cpp
//  DataStructs
//
//  Created by Corey on 17 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//

#include "linkedList.hpp"
#include <assert.h>
#include <stdio.h>
#include <iostream>

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
    Node *pt = list;
        while (pt && pt->val == val) {
            Node *temp = pt->next;
            delete pt;
            pt = temp;
        }
    if ((list = pt) == 0) {
        return;
    }
    
    Node *prv = pt; pt = pt->next;
    while (pt) {
        if (pt->val == val) {
            prv->next = pt->next;
        } else {
            pt = pt->next;
        }
    }
}


void List::push(Type val) {
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

void List::pop() {
    
}


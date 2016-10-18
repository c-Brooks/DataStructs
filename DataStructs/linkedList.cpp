//
//  LinkedList.cpp
//  DataStructs
//
//  Created by Corey on 17 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//

#include "linkedList.hpp"

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
    
}

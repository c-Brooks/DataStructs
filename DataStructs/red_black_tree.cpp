//
//  red_black_tree.cpp
//  DataStructs
//
//  Created by Corey on 4/24/17.
//  Copyright © 2017 Corey. All rights reserved.
//

#include "red_black_tree.hpp"
#include <stdio.h>
#include <iostream>

// Teardown:
// Execute a depth-first search and
//   delete all the leaf nodes.
// TODO: We leakin' ho!
void RBTree::remove() {
    RBTree_Node *pt = root;
    if (!pt) {
        return;
    }
    delete pt;
}


// For testing
void RBTree_Node::printVal() {
   if (val) {
     std::cout << val << std::endl;
   } else {
     std::cout << "NIL" << std::endl;
   }
}

Type RBTree::remove(Type val) {
  return 1;
}

void RBTree::insert(Type val) {
    RBTree_Node *traverser = root;

    while (traverser->left) {
        traverser = traverser->left;
    }
    traverser->left = new RBTree_Node(val, traverser);

}

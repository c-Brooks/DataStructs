//
//  red_black_tree.cpp
//  DataStructs
//
//  Created by Corey on 4/24/17.
//  Copyright © 2017 Corey. All rights reserved.
//

#include "red_black_tree.hpp"

// Teardown:
// Execute a depth-first search and
//   delete all the leaf nodes.
// TODO: We leakin' ho!
void RBTree::remove() {
    Node *pt = root;
    if (!pt) {
        return;
    }
    delete pt;
}


Type RBTree::remove(Type val) {
  return 1;
}

void RBTree::insert(Type val) {
  
}

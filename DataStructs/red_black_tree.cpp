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
void RBTree::remove() {
    Node *pt = root;
    if (!pt) {
        return;
    }
    delete pt;
}

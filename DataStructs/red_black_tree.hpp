//
//  red_black_tree.hpp
//  DataStructs
//
//  Created by Corey on 4/24/17.
//  Copyright © 2017 Corey. All rights reserved.
//

#ifndef red_black_tree_hpp
#define red_black_tree_hpp

#include <stdio.h>

// For now, only support int
typedef int Type;

class Node;

class RBTree {

  public:
      RBTree() { root = 0; }
      ~RBTree() { remove(); }

      void remove(); // Teardown
  private:
      Node *root;
};


// A node represents one element in the tree
// Since it is a Binary Tree, it has normal pointers to left and right children
// and its parent, as well as containing data and a colour, red or black
class Node {
    friend class RBTree;

private:
    enum { red, black } colour;
    Type val;
    Node *left, *right, *parent;
};


#endif /* red_black_tree_hpp */

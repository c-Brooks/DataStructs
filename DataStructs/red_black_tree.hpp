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

class RBTree_Node;

class RBTree {

  public:
      RBTree_Node *root;
      RBTree(RBTree_Node *node = 0) { root = node; }
      ~RBTree() { remove(); }


      void remove(); // Teardown

      Type remove(Type t);
      void insert(Type t);


  private:

      // Rotation
      void leftRotate(RBTree *subTree, RBTree_Node *u);
      void rightRotate(RBTree *subTree, RBTree_Node *u);
};


// A node represents one element in the tree
// Since it is a Binary Tree, it has normal pointers to left and right children
// and its parent, as well as containing data and a colour, red or black
class RBTree_Node {
    friend class RBTree;

// TODO: These should be private members
public:

    RBTree_Node(Type value = 0, RBTree_Node *p = NULL) {
        val    = value;
        parent = p;
        right  = NULL;
        left   = NULL;
        colour = black;
    }

    RBTree_Node *left, *right, *parent;
    void printVal();
    Type val;

private:
    enum { red, black } colour;
};


#endif /* red_black_tree_hpp */

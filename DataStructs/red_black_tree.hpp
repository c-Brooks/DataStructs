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
      Node *root;
      RBTree() { root = 0; }
      ~RBTree() { remove(); }


      void remove(); // Teardown

      Type remove(Type t);
      void insert(Type t);


  private:

      // Rotation
      void leftRotate(RBTree *subTree, Node *u);
      void rightRotate(RBTree *subTree, Node *u);
};


// A node represents one element in the tree
// Since it is a Binary Tree, it has normal pointers to left and right children
// and its parent, as well as containing data and a colour, red or black
class Node {
    friend class RBTree;

// TODO: These should be private members
public:
    Node *left, *right, *parent;

private:
    enum { red, black } colour;
    Type val;
};


#endif /* red_black_tree_hpp */

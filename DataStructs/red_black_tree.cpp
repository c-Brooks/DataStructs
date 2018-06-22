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
#include <assert.h>

// ===== Public =====

// Teardown:
// Execute a depth-first search and
//   delete all the leaf nodes.
// TODO: We leakin' ho!
void RBTree::remove() {
    RBTree_Node *pt = root;
    if (!pt) {
        return;
    }
    while (pt->left) {
        RBTree_Node *tempPt = pt;
        pt = pt->left;
        delete tempPt;
    }
    delete pt;
}



// Perform a private operation for testing
void RBTree::testRightRotate(RBTree_Node *B) {
    rightRotate(B);
}

// For testing
void RBTree_Node::printVal() {
    if (val) {
        std::cout << val << std::endl;
    } else {
        std::cout << "NIL" << std::endl;
    }
}

/**
  Deletes a node with a given value

  @param val The value of the node to delete
  @return Value of the deleted node, or NULL if the node is not present
 */
Type RBTree::remove(Type val) {
    RBTree_Node *pt = root;
    if (!pt) {
        return NULL;
    } else {
        return val;
    }
}

void RBTree::insert(Type val) {
    RBTree_Node *pt = root;
    int i = 0;

    while (pt->left) {
        pt = pt->left;
        i++;
    }
    pt->left = new RBTree_Node(val, pt);
    delete pt
}

// ===== Private =====

/**
    Mutates a subtree by performing a right rotation

    @param B A pointer to the root of the target subtree
*/
void RBTree::rightRotate(RBTree_Node *B) {

    if (B->left != NULL || B->right != NULL) return;

    RBTree_Node *A = B->left;
    A->parent = B->parent;
    B->parent = A;

    // Now switch the children
    A->right->parent = B;
    B->left = A->right;
}

/**
    Mutates a subtree by performing a right rotation

    @param B A pointer to the root of the target subtree
*/
void RBTree::leftRotate(RBTree_Node *A) {

    assert(A->left != NULL && A->right != NULL);

    RBTree_Node *B = A->right;
    B->parent = A->parent;
    A->parent = B;

    // Now switch the children
    A->right->parent = B;
    B->left = A->right;
}

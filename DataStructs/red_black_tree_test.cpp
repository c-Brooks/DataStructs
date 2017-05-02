//
//  red_black_tree_test.cpp
//  DataStructs
//
//  Created by Corey on 4/24/17.
//  Copyright © 2017 Corey. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <boost/test/unit_test.hpp>
#include "red_black_tree.hpp"

/************** Red-Black Trees ***************/

#define BOOST_TEST_MODULE RedBlackTreeTest

BOOST_AUTO_TEST_SUITE(RedBlackTreeTest)

BOOST_AUTO_TEST_CASE(treeCreation) {
    std::cout << "************ Red-Black Trees ************" << std::endl;

    std::cout << "Checking RBTree creation..." << std::endl;
    RBTree *testRBTree;
    BOOST_CHECK(testRBTree);
    std::cout << "RBTree creation test passed.\n" << std::endl;
}

BOOST_AUTO_TEST_CASE(treeInsertion) {
  std::cout << "Checking RBTree insertion..." << std::endl;

    RBTree_Node *root = new RBTree_Node;

    RBTree *testRBTree = new RBTree(root);

    testRBTree->insert(1);

    // Create a shallow copy of root node to traverse
    RBTree_Node traverser = *testRBTree->root;

    int i = 0;
    while(traverser.left) {
        traverser = *traverser.left;
        i++;
    }
    BOOST_CHECK(i == 1);
    BOOST_CHECK(traverser.val == 1);


    testRBTree->insert(4);

    // Reset
    i = 0;
    traverser = *testRBTree->root;
    while(traverser.left) {
        traverser = *traverser.left;
        i++;
    }
    BOOST_CHECK(i == 2);


    testRBTree->insert(3);
    testRBTree->insert(7);

    i = 0;
    traverser = *testRBTree->root;
    while(traverser.left) {
        traverser = *traverser.left;
        i++;
    }
    BOOST_CHECK(i == 4);

}

BOOST_AUTO_TEST_CASE(subtreeRotation) {
    std::cout << "Checking RBTree rotation..." << std::endl;

    RBTree_Node *root = new RBTree_Node;
    RBTree *testRBTree = new RBTree(root);
    testRBTree->insert(1);
    testRBTree->testRightRotate(root);

}

BOOST_AUTO_TEST_SUITE_END()

/**********************************************/

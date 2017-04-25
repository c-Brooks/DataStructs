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
    RBTree testRBTree;
    BOOST_CHECK(&testRBTree);
    std::cout << "RBTree screation test passed.\n" << std::endl;
}



BOOST_AUTO_TEST_SUITE_END()

/**********************************************/

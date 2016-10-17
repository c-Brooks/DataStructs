//
//  test.cpp
//  DataStructs
//
//  Created by Corey on 16 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//


// Tests for LinkedList:
// Creation
// Insertion
// Deletion
//







#define BOOST_TEST_MODULE LinkedListTest

#include <boost/test/included/unit_test.hpp>

/**************** Linked Lists ****************/
#include "node.cpp"
#include "node.hpp"
#include "list.cpp"
#include "list.hpp"


BOOST_AUTO_TEST_SUITE(LinkedLists)


BOOST_AUTO_TEST_CASE(listCreation) {
    BOOST_CHECK(1 == 1);
}


BOOST_AUTO_TEST_CASE(listTraversal) {
    BOOST_CHECK(1 == 1);
}

BOOST_AUTO_TEST_CASE(nodeInsertion) {
    BOOST_CHECK(1 == 1);
}

BOOST_AUTO_TEST_CASE(nodeDeletion) {
    BOOST_CHECK(1 == 1);
}



BOOST_AUTO_TEST_SUITE_END()

/**********************************************/

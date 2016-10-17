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








#define BOOST_TEST_MODULE LinkedListTest

#include <boost/test/included/unit_test.hpp>

/**************** Linked Lists ****************/
#include "linkedList.cpp"
#include "linkedList.hpp"


BOOST_AUTO_TEST_SUITE(LinkedLists)


BOOST_AUTO_TEST_CASE(listCreation) {
    List testList;
    BOOST_CHECK(&testList);
}


BOOST_AUTO_TEST_CASE(nodeInsertion) {
    List testList;
    testList.insert(1);
    BOOST_CHECK(testList.length() == 2);
}


BOOST_AUTO_TEST_CASE(nodeDeletion) {
    List testList;
    testList.insert(1);
    testList.insert(2);
    testList.insert(3);
    BOOST_CHECK(testList.length() == 3);
    testList.remove(3);
    BOOST_CHECK(testList.length() == 2);
}



BOOST_AUTO_TEST_SUITE_END()

/**********************************************/

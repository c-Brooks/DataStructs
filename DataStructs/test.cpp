//
//  test.cpp
//  DataStructs
//
//  Created by Corey on 16 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//


// Tests for LinkedList:
// Creation
// Pushing / Pop
// Deletion








#define BOOST_TEST_MODULE LinkedListTest

#include <boost/test/included/unit_test.hpp>

/**************** Linked Lists ****************/
#include "linkedList.hpp"


BOOST_AUTO_TEST_SUITE(LinkedLists)


BOOST_AUTO_TEST_CASE(listCreation) {
    List testList;
    BOOST_CHECK(&testList);
}


BOOST_AUTO_TEST_CASE(nodeInsertion) {
    List testList;
    BOOST_CHECK(testList.getLength() == 0);
    testList.push(1);
    BOOST_CHECK(testList.getLength() == 1);
}


BOOST_AUTO_TEST_CASE(nodeDeletion) {
    List testList;
    testList.push(1);
    testList.push(2);
    testList.push(3);
    BOOST_CHECK(testList.getLength() == 3);
    std::cout << testList.getLength() << std::endl;
    testList.remove(3);
    std::cout << testList.getLength() << std::endl;
    BOOST_CHECK(testList.getLength() == 2);
}


BOOST_AUTO_TEST_SUITE_END()


/**********************************************/

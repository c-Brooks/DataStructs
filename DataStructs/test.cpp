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
        std::cout << "Checking list creation..." << std::endl;
        List testList;
        BOOST_CHECK(&testList);
        std::cout << "List creation test passed.\n" << std::endl;
    }
    
    
    BOOST_AUTO_TEST_CASE(nodeInsertion) {
        std::cout << "Checking node insertion..." << std::endl;
        List testList;
        BOOST_CHECK(testList.getLength() == 0);
        testList.push(1);
        BOOST_CHECK(testList.getLength() == 1);
        std::cout << "Node insertion test passed.\n" << std::endl;
    }
    
    
    BOOST_AUTO_TEST_CASE(nodePop) {
        std::cout << "Checking node pop..." << std::endl;
        List testList;
        testList.push(1);
        testList.push(2);
        testList.push(2);
        BOOST_CHECK(testList.getLength() == 3);
        std::cout << "\tLength before pop: " << testList.getLength() << std::endl;
        testList.pop(); // Should delete BOTH instances of value 2
        std::cout << "\tLength after pop: " << testList.getLength() << std::endl;
        BOOST_CHECK(testList.getLength() == 1);
        std::cout << "Node popping test passed.\n" << std::endl;
    }
    
    BOOST_AUTO_TEST_CASE(nodeDeletion) {
        std::cout << "Checking node deletion..." << std::endl;
        List testList;
        testList.push(1);
        testList.push(2);
        testList.push(2);
        BOOST_CHECK(testList.getLength() == 3);
        std::cout << "\tLength before remove: " << testList.getLength() << std::endl;
        testList.remove(2); // Should delete BOTH instances of value 2
        std::cout << "\tLength after remove: " << testList.getLength() << std::endl;
        BOOST_CHECK(testList.getLength() == 1);
        std::cout << "Node deletion test passed.\n" << std::endl;
    }
    
    BOOST_AUTO_TEST_CASE(nodeAccess) {
        std::cout << "Checking node access" << std::endl;
        List testList;
        testList.push(1);
        testList.push(2);
        testList.push(2);
        BOOST_CHECK(testList.get(0) == 1);
        BOOST_CHECK(testList.get(1) == 2);
        BOOST_CHECK(testList.get(2) == 2);
        std::cout << "Node deletion test passed.\n" << std::endl;
    }
        
    
    BOOST_AUTO_TEST_SUITE_END()
    
    
    /**********************************************/

//
//  test.cpp
//  DataStructs
//
//  Created by Corey on 16 10, 2016.
//  Copyright © 2016 Corey. All rights reserved.
//


// Tests for LinkedList:
// Creation
// Inserting / Pop
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
        testList.insert(1);
        BOOST_CHECK(testList.getLength() == 1);
        std::cout << "Node insertion test passed.\n" << std::endl;
    }
    
    
    BOOST_AUTO_TEST_CASE(nodePop) {
        std::cout << "Checking node pop..." << std::endl;
        List testList;
        testList.insert(1);
        testList.insert(2);
        testList.insert(3);
        BOOST_CHECK(testList.getLength() == 3);
        std::cout << "\tLength before pop: " << testList.getLength() << std::endl;
        testList.pop();
        std::cout << "\tLength after pop: "  << testList.getLength() << std::endl;
        BOOST_CHECK(testList.getLength() == 2);
        std::cout << "Node popping test passed.\n" << std::endl;
    }
    
    BOOST_AUTO_TEST_CASE(nodeDeletion) {
        std::cout << "Checking node deletion..." << std::endl;
        List testList;
        testList.insert(1);
        testList.insert(2);
        testList.insert(2);
        BOOST_CHECK(testList.getLength() == 3);
        std::cout << "\tLength before remove: " << testList.getLength() << std::endl;
        testList.remove(2); // Should delete BOTH instances of value 2
        std::cout << "\tLength after remove: "  << testList.getLength() << std::endl;
        BOOST_CHECK(testList.getLength() == 1);
        std::cout << "Node deletion test passed.\n" << std::endl;
    }
    
    BOOST_AUTO_TEST_CASE(nodeAccess) {
        std::cout << "Checking node access" << std::endl;
        List testList;
        testList.insert(1);
        testList.insert(2);
        testList.insert(3);
        BOOST_CHECK(testList.get(0) == 3);
        std::cout << "\tIndex 0:  " << testList.get(0) << std::endl;
        BOOST_CHECK(testList.get(1) == 2);
        std::cout << "\tIndex 1:  " << testList.get(1) << std::endl;
        BOOST_CHECK(testList.get(2) == 1);
        std::cout << "\tIndex 2:  " << testList.get(2) << std::endl;
        std::cout << "Node access test passed.\n" << std::endl;
    }
        
    
    BOOST_AUTO_TEST_SUITE_END()
    
    
    /**********************************************/

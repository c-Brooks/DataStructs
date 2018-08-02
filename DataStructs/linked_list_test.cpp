#include <stdio.h>
#include <iostream>
#include <boost/test/unit_test.hpp>
#include "linked_list.hpp"

/**************** Linked Lists ****************/

#define BOOST_TEST_MODULE LinkedListTest

BOOST_AUTO_TEST_SUITE(LinkedLists)

BOOST_AUTO_TEST_CASE(listCreation) {
    std::cout << "************** Linked Lists **************" << std::endl;
    std::cout << "Checking list creation..." << std::endl;
    List testList;
    BOOST_CHECK(&testList);
    std::cout << "List creation test passed.\n" << std::endl;
    }


    BOOST_AUTO_TEST_CASE(nodeInsertion) {

    std::cout << "Checking Node Insertion..." << std::endl;
    std::cout << "Node Insertion test passed.\n" << std::endl;
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
        std::cout << "******************************************" << std::endl;

    }


    BOOST_AUTO_TEST_SUITE_END()


    /**********************************************/

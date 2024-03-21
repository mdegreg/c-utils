//
// Created by matthew degregorio on 3/20/24.
//

#include "../src/collections.c"

#include "gtest/gtest.h"

TEST(LinkedList, LinkedListCreate) {
    linked_list_t test_list;
    test_list = create_linked_list();
    EXPECT_TRUE(test_list.head->data == nullptr);
    EXPECT_TRUE(test_list.tail->data == nullptr);
}

TEST(LinkedList, LinkedListAddHead) {
    linked_list_t test_list;
    test_list = create_linked_list();
    int new_val;
    new_val = 3;
    add_linked_list_head(&test_list, &new_val);
    EXPECT_EQ(* (int*) test_list.head->data, new_val);
}
TEST(LinkedList, LinkedListAddTail) {
    linked_list_t test_list;
    test_list = create_linked_list();
    int new_val;
    new_val = 3;
    add_linked_list_tail(&test_list, &new_val);
    EXPECT_EQ(* (int*) test_list.tail->data, new_val);
}

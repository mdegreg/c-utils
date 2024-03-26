//
// Created by matthew degregorio on 3/20/24.
//

#include "../src/collections.c"

#include "gtest/gtest.h"

TEST(LinkedList, LinkedListCreate) {
    linked_list_t test_list;
    test_list = create_linked_list();
    EXPECT_TRUE(test_list.head == nullptr);
    EXPECT_TRUE(test_list.tail == nullptr);
}

TEST(LinkedList, LinkedListAddHead) {
    linked_list_t test_list;
    test_list = create_linked_list();
    int new_val;
    new_val = 3;
    add_linked_list_head(&test_list, &new_val);
    EXPECT_EQ(* (int*) test_list.head->data, new_val);
    EXPECT_EQ(* (int*) test_list.tail->data, new_val);
    int second_val;
    second_val = 5;
    add_linked_list_head(&test_list, &second_val);
    EXPECT_EQ(* (int*) test_list.head->data, second_val);
    EXPECT_EQ(* (int*) test_list.head->next->data, new_val);

}
TEST(LinkedList, LinkedListAddTail) {
    linked_list_t test_list;
    test_list = create_linked_list();
    int new_val;
    new_val = 3;
    add_linked_list_tail(&test_list, &new_val);
    EXPECT_EQ(* (int*) test_list.tail->data, new_val);
    EXPECT_EQ(* (int*) test_list.head->data, new_val);
    int second_val;
    second_val = 25;
    add_linked_list_tail(&test_list, &second_val);
    EXPECT_EQ(* (int*) test_list.tail->data, second_val);
    EXPECT_EQ(* (int*) test_list.head->data, new_val);
}

//
// Created by matthew degregorio on 3/19/24.
//

#ifndef C_UTILS_COLLECTIONS_H
#define C_UTILS_COLLECTIONS_H

#endif //C_UTILS_COLLECTIONS_H

typedef struct node {
    void * data;
    struct node * next;
} node_t;

typedef struct linked_list {
    node_t * head;
    node_t * tail;
} linked_list_t;

linked_list_t create_linked_list(void);
void add_linked_list_head(linked_list_t * list, void * value);
void add_linked_list_tail(linked_list_t * list, void * value);

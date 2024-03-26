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
/*
 * Using this will instantiate .head and .tail
 * struct members to NULL automatically, allowing
 * for graceful interaction with head and tail
 * addition functions, which use NULL pointer to
 * identify whether the list has no presently attached
 * list nodes.
 */

void add_linked_list_head(linked_list_t * list, void * value);
void add_linked_list_tail(linked_list_t * list, void * value);
/*
 * Note that these check whether the list has been instantiated,
 * and for the first node will attach the node to both head and
 * tail for future reference.
 */


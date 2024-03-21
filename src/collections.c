//
// Created by matthew degregorio on 3/19/24.
//

#include <stdlib.h>
#include "collections.h"

linked_list_t create_linked_list(void){
    linked_list_t new_list;
    node_t * node;
    node = (node_t *) malloc(sizeof(node_t));
    node->data = NULL;
    new_list.head = node;
    new_list.tail = node;
    return new_list;
}

void add_linked_list_head(linked_list_t * list, void * value){
    node_t * new_head;
    new_head = (node_t *) malloc(sizeof(node_t));
    new_head->data = value;
    new_head->next = list->head;
    list->head = new_head;
}

void add_linked_list_tail(linked_list_t * list, void * value){
    node_t * new_tail;
    new_tail = (node_t *) malloc(sizeof(node_t));
    new_tail->data = value;
    if (list->tail != NULL) {
        list->tail->next = new_tail;
    }
    list->tail = new_tail;
}

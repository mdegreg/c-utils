//
// Created by matthew degregorio on 3/19/24.
//

#include <stdlib.h>
#include "collections.h"

linked_list_t create_linked_list(void){
    linked_list_t new_list;
    new_list.head = NULL;
    new_list.tail = NULL;
    return new_list;
}

void add_linked_list_head(linked_list_t * list, void * value){
    node_t * new_head;
    new_head = (node_t *) malloc(sizeof(node_t));
    new_head->data = value;
    if (list->head != NULL) {
        new_head->next = list->head;
    }
    list->head = new_head;
    if (list->tail == NULL) {
        // If tail doesn't exist, then a new head will also
        // be the new tail.
        list->tail = new_head;
    }
}

void add_linked_list_tail(linked_list_t * list, void * value){
    node_t * new_tail;
    new_tail = (node_t *) malloc(sizeof(node_t));
    new_tail->data = value;
    if (list->tail != NULL) {
        // We attach the new node to the existing tail, if it exists--or skip to avoid
        // a bus error.
        list->tail->next = new_tail;
    }
    if (list->head == NULL) {
        // If head doesn't exist, then a new tail will also
        // be the new head.
        list->head = new_tail;
    }
    list->tail = new_tail;
}

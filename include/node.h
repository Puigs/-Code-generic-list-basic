#ifndef NODE_H_
#define NODE_H_

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct list {
    void *value;
    struct list *next;
}   list_t;

void print_list(list_t *list);
bool list_add_elem_at_front(list_t **front_ptr, void *elem);
bool list_is_empty(list_t *list);
bool list_add_elem_at_back(list_t **front_ptr, void *elem);
unsigned int list_get_size(list_t *list);


#endif /* !NODE_H_ */

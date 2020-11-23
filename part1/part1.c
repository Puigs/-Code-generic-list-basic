#include "../include/node.h"

void print_list(list_t *list)
{
    /*...*/
}

bool list_is_empty(list_t *list)
{
   /*
   Return true if list exist
   else return false
   */
}

bool list_add_elem_at_front(list_t **front_ptr, void *elem)
{
    list_t *node = malloc(sizeof(*node));

    if (front_ptr == NULL || node == NULL)
        return (false);
    node->value = /*...*/;
    node->next = /*...*/;
    *front_ptr = /*...*/;
    return (true);
}
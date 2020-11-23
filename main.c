#include "include/node.h"

int main(void) {
    list_t *my_list = NULL;

    bool check = list_add_elem_at_front(&my_list, " il est ");
    if (check && list_is_empty(my_list) == false) {
        printf("Votre liste chainée existe!");
    } else
        printf("0/20.");

    list_add_elem_at_front(&my_list, "Brayan");
    list_add_elem_at_back(&my_list, " vachement ");
    list_add_elem_at_back(&my_list, " beau gosse non?");
    
    //Ici print la taille de ta list
    return (0);
}
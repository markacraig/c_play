#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

int get_num_nodes_circular_list(link x) {
    int cnt = 1;

    if (x == NULL)
        return -1;
    
    link t = x->next;

    while (x != t) {
        cnt++;
        t = t->next;
    }

    return cnt;
}

int get_num_nodes_between_nodes(link x, link y) {
    int cnt = 0;

    if (x == NULL || y == NULL)
        return -1;

    while (x->next != y) {
        cnt++;
        x = x->next;
    }

    return cnt;
}

int insert_circular_list_in_circular_list(link x, link y) {
    if (x == NULL || y == NULL)
        return -1;
    
    link t = x->next, u = y->next;

    x->next = y;

    while (y != u->next) {
        u = u->next;
    }

    u->next = t;

    return 0;
}

int print_node_item_value_in_list(link x) {
    if (x == NULL)
        return -1;
    
    link t = x->next;
    
    printf("Node Item: %d\n", x->item);

    while (x != t && t != NULL) {
        printf("Node Item: %d\n", t->item);
        t = t->next;
    }

    return 0;
}

int move_node_on_circular_list(link x, link y) {
    if (x == NULL || y == NULL)
        return -1;

    link t = y->next->next;

    y->next->next = x->next->next;
    x->next->next = y->next;
    y->next = t;

    return 0;
}

int move_largest_node_to_end_of_list(link x) {
    link t = NULL;
    link prev = NULL;

    if (x == NULL)
        return -1;
    
    while (x->next != NULL) {
        if (prev)
            printf("Prev Item: %d Item: %d Next Item %d\n", prev->item, x->item, x->next->item);

        if (x->item > x->next->item) {
            t = x->next->next;
            
            if (prev != NULL) {
                prev->next = x->next;
            }
            
            prev = x->next;
            x->next->next = x;
            x->next = t;
        }
        else {
            prev = x;
            x = x->next;
        }
    }

    return 0;
}

link get_idx_of_smallest_val(link x) {
    if (x == NULL)
        return NULL;
    
    link t = x->next, sm_node = NULL;

    while (x != t && t != NULL) {
        if (sm_node == NULL) {
            if (x->item < t->item) {
                sm_node = x;
            } else {
                sm_node = t;
            }
        } else {
            if (sm_node->item > t->item) {
                sm_node = t;
            }
        }
        t = t->next;
    }

    return sm_node;
}

link move_node_to_start_of_list(link a, link x) {
    if (a == NULL || x == NULL) {
        return NULL;
    }

    link t = x->next;

    while (x != t && t != NULL) {
        if (x == a) {
            return a;
        }
        if (t == a) {
            x->next = a->next;
        }
        if (t->next == a ) {
            t->next = a->next;
            break;
        }
        t = t->next;
    }

    a->next = x;

    return a;
}

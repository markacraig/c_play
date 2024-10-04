/****************************************************************
 * @file test_linked_list.c
 * @brief This program is used for solving problems from the Algorithms
 * in C book by Robert Sedgewick.
 * 
 * @author Mark Craig
 * @date 2024-09-19 
 * 
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linked_list.h"
#include "test_linked_list.h"

#define TEST_MOVE_NODE_NUM_NODES    10
#define TEST_MOVE_NODE_IDX_1        3
#define TEST_MOVE_NODE_IDX_2        7

link generate_linked_list(int num_nodes, bool circular, bool isRand) {
    link x = malloc(sizeof(*x)), t = x;
    x->item = 1;

    if (circular) {
        x->next = x;

        for (int i = 2; i <= num_nodes; i++) {
            x = (x->next = malloc(sizeof(*x)));
            if (isRand)
                x->item = rand() % num_nodes;
            else
                x->item = i;
            x->next = t;
        }
    }
    else {
        x->next = NULL;

        for (int i = 2; i <= num_nodes; i++) {
            x = (x->next = malloc(sizeof(*x)));
            if (isRand)
                x->item = rand() % num_nodes;
            else
                x->item = i;
            x->next = NULL;
        }
    }

    return t;
}

link get_ith_node_in_circular_list(int ith_node, link x) {
    if (x == NULL)
        return NULL;
    
    for (int i = 0; i < ith_node; i++) {
        x = x->next;
    }

    return x;
}

int test_get_num_nodes_circular_list(int num_nodes) {
    int cnt = 0;
    link circll = generate_linked_list(num_nodes, true, false);
    
    cnt = get_num_nodes_circular_list(circll);

    printf("CNT: %d Nodes: %d\n", cnt, num_nodes);

    if (cnt == num_nodes) {
        printf("TEST PASSED!\n");
        return 0;
    }
    else {
        printf("TEST FAILED!\n");
        return 1;
    }
}

int test_get_num_nodes_between_nodes(int num_nodes) {
    int cnt = 0, nodes_between = 0;
    link circll = generate_linked_list(num_nodes, true, false);

    nodes_between = (num_nodes / 2) - 1;
    
    cnt = get_num_nodes_between_nodes(circll, get_ith_node_in_circular_list(nodes_between + 1, circll));

    printf("CNT: %d Nodes Between: %d\n", cnt, nodes_between);

   if (cnt == nodes_between) {
        printf("TEST PASSED!\n");
        return 0;
    }
    else {
        printf("TEST FAILED!\n");
        return 1;
    }
}

int test_insert_circular_list_in_circular_list(int num_nodes) {
    int cnt = 0;
    link circll1 = generate_linked_list(num_nodes, true, false); 
    link circll2 = generate_linked_list(num_nodes, true, false);

    printf("Printing Circular List 1 values.\n");
    print_node_item_value_in_list(circll1);

    printf("Printing Circular List 2 values.\n");
    print_node_item_value_in_list(circll2);

    insert_circular_list_in_circular_list(circll1, circll2);
    
    cnt = get_num_nodes_circular_list(circll1);

    printf("Printing New Circular List 1 values.\n");
    print_node_item_value_in_list(circll1);

    printf("CNT: %d Nodes: %d\n", cnt, (num_nodes * 2));

    if (cnt == (num_nodes * 2)) {
        printf("TEST PASSED!\n");
        return 0;
    }
    else {
        printf("TEST FAILED!\n");
        return 1;
    }

}

int test_move_node_on_circular_list(void) {
    link circll = generate_linked_list(TEST_MOVE_NODE_NUM_NODES, true, false);
    link node1 = get_ith_node_in_circular_list(TEST_MOVE_NODE_IDX_1, circll);
    link node2 = get_ith_node_in_circular_list(TEST_MOVE_NODE_IDX_2, circll);

    printf("Printing Circular List values.\n");
    print_node_item_value_in_list(circll);

    if (node1 != NULL && node2 != NULL) {
        move_node_on_circular_list(node1, node2);
    }

    printf("Printing NEW Circular List values.\n");
    print_node_item_value_in_list(circll);

    return 0;
}

int test_generate_linked_list(int num_nodes) {
    link circll = generate_linked_list(num_nodes, true, false);

    printf("Printing Circular List values.\n");
    print_node_item_value_in_list(circll);

    return 0;
}

int test_move_largest_node_to_end_of_list(int num_nodes) {
    link x = generate_linked_list(num_nodes, false, true);

    printf("Printing Linear Random List values.\n");
    print_node_item_value_in_list(x);

    printf("Moving largest value to end of list.\n");
    move_largest_node_to_end_of_list(x);

    printf("Printing NEW Linear Random List values.\n");
    print_node_item_value_in_list(x);

    return 0;
}

int test_get_idx_of_smallest_val(int num_nodes) {
    link sm_val_idx = NULL;
    link x = generate_linked_list(num_nodes, false, true);

    printf("Printing Linear List values.\n");
    print_node_item_value_in_list(x);

    sm_val_idx =  get_idx_of_smallest_val(x);
    printf("Index of smallest value: %d\n", sm_val_idx->item);

    move_node_to_start_of_list(sm_val_idx, x);

    printf("Printing NEW Linear List values.\n");
    print_node_item_value_in_list(sm_val_idx);

    return 0;
}

int test_free_nodes_in_list(int num_nodes) {
    link x = generate_linked_list(num_nodes, false, false);

    printf("Printing Linear List values.\n");
    print_node_item_value_in_list(x);

    x = free_nodes_in_list(x);

    if (x == NULL) {
        return 0;
    } else {
        return -1;
    }
}


int test_free_nth_node_in_list(int num_nodes) {
    link x = generate_linked_list(num_nodes, false, false);

    printf("Printing Linear List values.\n");
    print_node_item_value_in_list(x);

    x = free_nth_node_in_list(x, 2);

    printf("Printing Linear List after every 2nd node removed.\n");
    print_node_item_value_in_list(x);

    if (x == NULL) {
        return -1;
    } else {
        return 0;
    }
}

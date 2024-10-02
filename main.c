/****************************************************************
 * 
 * This program is used for solving problems from the Algorithms
 * in C book by Robert Sedgewick.
 * 
 * Author: Mark Craig
 * Date: 2024-09-19 
 * 
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "test_linked_list.h"

#define TEST_GET_NUM_NODES_NODE_CNT 10

int main() {
    int retval = 0, test_cnt_pass = 0, test_cnt_fail = 0;    

    printf("Testing: get_num_nodes_circular_list()\n");
    retval = test_get_num_nodes_circular_list(TEST_GET_NUM_NODES_NODE_CNT);
    if (retval)
        test_cnt_fail++;
    else
        test_cnt_pass++;

    printf("Testing: get_num_nodes_between_nodes()\n");
    retval = test_get_num_nodes_between_nodes(TEST_GET_NUM_NODES_NODE_CNT);
    if (retval)
        test_cnt_fail++;
    else
        test_cnt_pass++;

    printf("Testing: insert_circular_list_in_circular_list()\n");
    retval = test_insert_circular_list_in_circular_list(TEST_GET_NUM_NODES_NODE_CNT);
    if (retval)
        test_cnt_fail++;
    else
        test_cnt_pass++;

    printf("Testing: move_node_on_circular_list()\n");
    retval = test_move_node_on_circular_list();
    if (retval)
        test_cnt_fail++;
    else
        test_cnt_pass++;

    printf("Testing: generate_linked_list()\n");
    retval = test_generate_linked_list(TEST_GET_NUM_NODES_NODE_CNT);
    if (retval)
        test_cnt_fail++;
    else
        test_cnt_pass++;

    printf("Testing: move_largest_node_to_end_of_list()\n");
    retval = test_move_largest_node_to_end_of_list(TEST_GET_NUM_NODES_NODE_CNT);
    if (retval)
        test_cnt_fail++;
    else
        test_cnt_pass++;

    printf("Testing: get_idx_of_smallest_val()\n");
    retval = test_get_idx_of_smallest_val(TEST_GET_NUM_NODES_NODE_CNT);
    if (retval)
        test_cnt_fail++;
    else
        test_cnt_pass++;

    printf("Total Tests: %d PASS: %d FAIL: %d\n", test_cnt_fail + test_cnt_pass, test_cnt_pass, test_cnt_fail);
    
    return retval;
}
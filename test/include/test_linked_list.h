/**************************************************************************//**
 * @file test_linked_list.h
 * @brief test header file for linked list examples in Algorithms In C book.
 * This file is used to run unit tests on the example problems.
 * 
 * @author Mark Craig
 * @date 2024-10-02
 *
 ******************************************************************************/
#ifndef __TEST_LINKED_LIST_H__
#define __TEST_LINKED_LIST_H__

int test_get_num_nodes_circular_list(int num_nodes);
int test_get_num_nodes_between_nodes(int num_nodes);
int test_insert_circular_list_in_circular_list(int num_nodes);
int test_move_node_on_circular_list(void);
int test_generate_linked_list(int num_nodes);
int test_move_largest_node_to_end_of_list(int num_nodes);
int test_get_idx_of_smallest_val(int num_nodes);
int test_free_nodes_in_list(int num_nodes);
int test_free_nth_node_in_list(int num_nodes);

#endif /* __TEST_LINKED_LIST_H__ */
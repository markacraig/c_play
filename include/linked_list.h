/**************************************************************************//**
 * @file linked_list.h
 * @brief header file for linked list examples in Algorithms In C book.
 * 
 * @author Mark Craig
 * @date 2024-10-02
 *
 ******************************************************************************/
#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef struct node* link;

struct node {
    int item;
    link next;
};

typedef link Node;

/***** algorithms in c problems *****/
/**
 * @brief Retrieves number of nodes in a circular list.
 * 
 * @param x pointer to a circular linked list.
 * @return Number of nodes found in the circular list pointed to by x.
 */
int get_num_nodes_circular_list(link x);

/**
 * @brief Retrieves number of nodes between two nodes in a circular list.
 * 
 * @param x pointer to first node circular linked list.
 * @param y pointer to second node circular linked list.
 * @return Number of nodes found between two nodes in a circular list.
 */
int get_num_nodes_between_nodes(link x, link y);

/**
 * @brief Inserts a circular list inside another circular list after the 
 * node which is pointed to.
 * 
 * @param x Pointer to a list to place another list inside.
 * @param y Pointer to a list to insert into the first list.
 * @return Returns 0 for now, need to add some error handling.
 */
int insert_circular_list_in_circular_list(link x, link y);

/**
 * @brief Prints all Items in a circular array
 * 
 * @param x Pointer to a list to print values.
 * @return Returns 0 for now, need to add some error handling.
 */
int print_node_item_value_in_list(link x);

/**
 * @brief Swaps nodes on linked list
 * 
 * @param x Pointer to first node to swap.
 * @param y Pointer to second node to swap.
 * @return Returns 0 for now, need to add some error handling.
 */
int move_node_on_circular_list(link x, link y);

/**
 * @brief Finds largest node in list and moves it to end of the list.
 * 
 * @param x Pointer to move largest value.
 * @return Returns 0 for now, need to add some error handling.
 */
int move_largest_node_to_end_of_list(link x);

/**
 * @brief Finds smallest node and returns it.
 * 
 * @param x Pointer to move largest value.
 * @return Returns pointer to smallest node in list.
 */
link get_idx_of_smallest_val(link x);

/**
 * @brief Swaps nodes on linked list
 * 
 * @param a Pointer to list to move node on.
 * @param x Pointer node to move.
 * @return Returns pointer to new list where node to move is the head node.
 */
link move_node_to_start_of_list(link a, link x);

/**
 * @brief Frees all nodes on list provided.
 * 
 * @param x Pointer to list to free nodes.
 * @return Returns NULL pointer if all nodes freed.
 */
link free_nodes_in_list(link x);

/**
 * @brief Frees Nth node on list provided.
 * 
 * @param x Pointer to list to free nodes.
 * @return Returns NULL pointer if all nodes freed.
 */
link free_nth_node_in_list(link x, int n);

/***** List Interface *****/
void initNodes(int);
link newNode(int);
void freeNode(link);
void insertNext(link, link);
link deleteNext(link);
link Next(link);
int Item(link);

#endif /* __LINKED_LIST_H__ */
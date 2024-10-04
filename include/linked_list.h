#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef struct node* link;

struct node {
    int item;
    link next;
};

typedef link Node;

/* algorithms in c problems */
int get_num_nodes_circular_list(link x);
int get_num_nodes_between_nodes(link x, link y);
int insert_circular_list_in_circular_list(link x, link y);
int print_node_item_value_in_list(link x);
int move_node_on_circular_list(link x, link y);
int move_largest_node_to_end_of_list(link x);
link get_idx_of_smallest_val(link x);
link move_node_to_start_of_list(link a, link x);

/* List Interface */
void initNodes(int);
link newNode(int);
void freeNode(link);
void insertNext(link, link);
link deleteNext(link);
link Next(link);
int Item(link);

#endif /* __LINKED_LIST_H__ */
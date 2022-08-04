#include "binary_trees.h"

/**
 * @binary_tree_insert_left - inserts node as left-child from another node
 * @parent: points to the parent node of node to create
 * @value: value to put into new node
 * Return: returns pointer to a new node, null otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if(!new_node)
        return(NULL);
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return(new_node);
}

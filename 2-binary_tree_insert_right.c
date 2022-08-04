#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of another node
 * @parent: points to the parent node of node to create
 * @value: value to put into new node
 * Return: returns pointer to a new node, null otherwise
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *son = NULL, *help = NULL;

    if(parent)
    {
        son = binary_tree_node(parent, value);
        if(!son)
            return(NULL);
        if(parent->right == NULL)
            parent->right = son;
        else
        {
            help = parent->right;
            parent->right = son;
            help->parent = son;
            son->right = help;
        }
    }
    return(son);
}

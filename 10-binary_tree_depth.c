#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree - pointer to node to measure depth
 * Return - Null if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t count_depth = 0;

    if(tree)
    {
        if(tree->parent)
            count_depth = 1 + binary_tree_depth(tree->parent);
        return(count_depth);
    }
    return(0);
}

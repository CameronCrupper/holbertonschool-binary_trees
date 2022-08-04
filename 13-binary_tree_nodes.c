#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to root node of tree being counted
 * Return: if tree is NULL returns 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;

    if(tree)
    {
        if(tree->left || tree->right)
        {
            if(tree->left)
                count += binary_tree_nodes(tree->left);
            if(tree->right)
                count += binary_tree_nodes(tree->right);
            count++;
        }
    }
    return(count);
}

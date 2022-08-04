#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure the size
 * Return: if tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t count = 0;

    if(tree)
    {
        if(tree->left)
            count += binary_tree_size(tree->left);
        if(tree->right)
            count += binary_tree_size(tree->right);
        count++;
    }
    return(count);
}

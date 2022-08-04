#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of tree being counted for leaves
 * Return: if tree is NULL returns 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t count_leaves = 0;

    if(tree)
    {
        if(tree->left == NULL && tree->right == NULL)
        {
            count_leaves++;
        }
        count_leaves += binary_tree_leaves(tree->left);
        count_leaves += binary_tree_leaves(tree->right);
    }
    return(count_leaves);
}

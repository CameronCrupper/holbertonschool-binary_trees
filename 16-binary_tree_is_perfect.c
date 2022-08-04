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


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node of tree being checked
 * Return: if tree is NULL returns 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    if(tree)
    {
        if(!(tree->left) && !(tree->right))
            return(1);
        if(tree->left && tree->right)
            if(binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
                return(1);
    }
    return(0);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree being checked
 * Return: if tree is NULL function must retrun 0, 1 if its perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if(tree)
    {
        if(binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right))
        {
            if(binary_tree_size(tree->left) == binary_tree_size(tree->right))
            {
                return(1);
            }
        }
    }
    return(0);
}

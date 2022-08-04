#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root node of tree being measured
 * Return: Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t count_left = 0, count_right = 0;

    if(tree)
    {
        if(tree->left)
            count_left = 1 + binary_tree_height(tree->left);
        if(tree->right)
            count_right = 1 + binary_tree_height(tree->right);
        if(count_left > count_right)
            return(count_left);
        else
            return(count_right);
    }
    return(0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree to be measured
 * Return: if tree is NULL return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int height_left = 0, height_right = 0;

    if(tree)
    {
        if(tree->left)
        {
            height_left = 1 + binary_tree_height(tree->left);
        }
        if(tree->right)
        {
            height_right = 1 + binary_tree_height(tree->right);
        }
    }
    return(height_left - height_right);
}

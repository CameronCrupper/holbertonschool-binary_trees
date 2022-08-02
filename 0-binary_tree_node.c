#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: points to the parent node of node to create
 * @value: value to put into new node
 * @Retrun: returns pointer to a new node, null otherwise
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *son = NULL;

	son = malloc(sizeof(binary_tree_t));

	if (!son)
	{
		return (NULL);
	}
	son->n = value;
	son->parent = parent;
	son->left = NULL;
	son->right = NULL;

	return (son);
}

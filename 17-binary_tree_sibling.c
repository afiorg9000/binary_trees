#include "binary_trees.h"

/**
 * binary_tree_sibling - a function to finds the sibling of a node
 * @node: pointer to node to find sibling of
 * Return: pointer to sibling node, else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}

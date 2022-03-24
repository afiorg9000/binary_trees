#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: pointer to node of tree to measure
 * Return: the height of tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Maxleft = 0, Maxright = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		Maxleft = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		Maxright = 1 + binary_tree_height(tree->right);
	}

	if (Maxleft > Maxright)
		return (Maxleft);
	else
		return (Maxright);
}

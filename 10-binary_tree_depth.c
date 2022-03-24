#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree.
 * @tree: pointer to node to measure depth
 * Return: returns the depth of tree from given node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}

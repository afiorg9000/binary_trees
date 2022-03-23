#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
    int full = 1;

    if (tree == NULL)
    {
        return 0;
    }

    if ((tree->left && (tree->right == NULL)) || ((tree->left == NULL) && tree->right))
    {
        return 0;
    }
    if (tree->left != NULL)
    {
        full = binary_tree_is_full(tree->left);
    }
    if (tree->right != NULL)
    {
        full = binary_tree_is_full(tree->right);
    }
    return (full);
}
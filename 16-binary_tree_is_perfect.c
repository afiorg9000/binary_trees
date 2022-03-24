#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int l, r;

    if (tree == NULL)
    {
        return 0;
    }

    l = binary_tree_height(tree->left);
    r = binary_tree_height(tree->right);
    if (l != r)
    {
        return 0;
    }
    return ()
}
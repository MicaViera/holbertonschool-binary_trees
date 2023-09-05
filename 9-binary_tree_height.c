#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the depth of a node in a binary tree.
 * @tree: Is a pointer to the node ina a binary tree.
 * Return: 0 if the tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t count = 0;

    if (!tree)
    {
        return (0);
    }
    while (tree)
    {
        if (tree->left != NULL)
        {
            count++;
            tree = tree->left;
        }
        else if (tree->right != NULL)
        {
            count++;
            tree = tree->right;
        }
        else
        {
            return (count);
        }
    }
    return (0);
}

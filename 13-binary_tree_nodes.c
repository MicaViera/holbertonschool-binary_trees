#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - Count nodes with >= 1 child in a binary tree.
* @tree: Pointer to the root node to count nodes with children.
*
* Return: Number of nodes with >= 1 child, or 0 if tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left, right;
if (!tree || (!tree->left && !tree->right))
return (0);
left = binary_tree_nodes(tree->left);
right = binary_tree_nodes(tree->right);
return (left + right + 1);
}

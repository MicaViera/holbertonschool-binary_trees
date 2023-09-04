#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a binary tree node.
* @node: A pointer to the node to find the uncle.
*
* Return: A pointer to the uncle node, or NULL if no uncle is found.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent || !node->parent->parent)
return (NULL);
if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);
else
return (node->parent->parent->left);
}

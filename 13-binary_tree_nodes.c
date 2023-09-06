#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child.
 * @tree: Is a pointer to the root node.
 * Return: 0 if the tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		count += 1;
	}
	return (count);
}

#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * @tree: Is a pointer to the root of the tree to measure the size.
 * Return: 0 if the tree is NULL.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree)
	{
		count += binary_tree_size(tree->left);
		count += 1;
		count += binary_tree_size(tree->right);
	}
	return (count);
}

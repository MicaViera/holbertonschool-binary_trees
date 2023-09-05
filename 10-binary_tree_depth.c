#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node in
 * a binary tree.
 * @tree: Is a pointer to the node ina a binary tree.
 * Return: 0 if the tree is NULL.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}

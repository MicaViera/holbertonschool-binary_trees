#include "binary_trees.h"
/**
 * binary_tree_height -  Function that measures the height of a binary tree.
 * @tree: Is a pointer to the root node of the tree.
 * Return: 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		height = 2;
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		height = 1;
	}
	else
	{
		height = 0;
	}
	return (height);
}

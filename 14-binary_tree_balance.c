#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the balance factor of a b-tree.
 * @tree: Is a pointer to the root node.
 * Return: 0 if the tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree)
	{
		lheight = binary_tree_height(tree->left);
		rheight = binary_tree_height(tree->right);
	}
	return (lheight - rheight);
}
/**
 * binary_tree_height - Function that measures the depth of a node in a
 * binary tree.
 * @tree: Is a pointer to the node ina a binary tree
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
			count += 1;
			return (count);
		}
	}
	return (0);
}

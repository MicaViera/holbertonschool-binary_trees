#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a binary tree
 * using preorder travesal.
 * @tree: Is a pointer to the root node of the tree to traverse.
 * @func: Is a pointer to a function.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

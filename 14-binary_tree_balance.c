#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_height - Measure the height of a binary tree.
* @tree: Pointer to the root node to measure the height.
* Return: Height of the tree, or 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (!tree)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (1 + (left > right ? left : right));
}
/**
* binary_tree_balance - Measure the balance factor of a binary tree.
* @tree: Pointer to the root node to measure the balance factor.
* Return: Balance factor of the tree, or 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;
if (!tree)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}

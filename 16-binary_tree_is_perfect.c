#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_height - Measure the height of a binary tree.
* @tree: Pointer to the root node of the tree.
*
* Return: Height of the tree, 0 if `tree` is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (!tree)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (1 + (left_height > right_height ? left_height : right_height));
}
/**
* binary_tree_is_perfect - Check if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_height, right_height;
if (!tree)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height == right_height);
}

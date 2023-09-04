#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child.
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value:  Is the value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (!parent)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (!left_node)
	{
		free(left_node);
		return (NULL);
	}
	left_node->n = value;
	left_node->parent = parent;
	left_node->right = NULL;
	left_node->left = NULL;
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}

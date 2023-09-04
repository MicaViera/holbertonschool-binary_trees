#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node as the left-child.
 * @parent: Is a pointer to the node to insert the right-child in.
 * @value:  Is the value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (!parent)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (!right_node)
	{
		free(right_node);
		return (NULL);
	}
	right_node->n = value;
	right_node->parent = parent;
	right_node->right = NULL;
	right_node->left = NULL;
	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}

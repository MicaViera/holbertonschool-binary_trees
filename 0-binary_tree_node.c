#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_node = NULL;

	bt_node = malloc(sizeof(binary_tree_t));
	if (!bt_node)
	{
		free(bt_node);
		return (NULL);
	}
	bt_node->n = value;
	bt_node->parent = parent;
	bt_node->left = NULL;
	bt_node->right = NULL;
	return (bt_node);
}

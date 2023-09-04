#include "binary_trees.h"

/**
* binary_tree_sibling - Encuentra el hermano de un nodo.
* @node: Un puntero al nodo del cual encontrar el hermano.
*
* Return: Un puntero al nodo hermano, o NULL si no se encuentra hermano.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
else if (node->parent->right == node)
return (node->parent->left);
return (NULL);
}

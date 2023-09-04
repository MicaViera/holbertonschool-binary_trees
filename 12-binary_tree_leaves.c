#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_leaves - Cuenta las hojas en un árbol binario.
* @tree: Un puntero al nodo raíz del árbol para contar las hojas.
*
* Return: El número de hojas en el árbol, o 0 si el árbol es NULL.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left_leaves, right_leaves;
/* Caso base: Si el árbol es NULL, no hay hojas. */
if (tree == NULL)
return (0);
/* Caso base: Si es un nodo hoja, retorna 1 (una hoja). */
if (tree->left == NULL && tree->right == NULL)
return (1);
/* Recursivamente contamos las hojas en los subárboles izquierdo y derecho. */
left_leaves = binary_tree_leaves(tree->left);
right_leaves = binary_tree_leaves(tree->right);
/* Retornamos la suma de las hojas en ambos subárboles. */
return (left_leaves + right_leaves);
}

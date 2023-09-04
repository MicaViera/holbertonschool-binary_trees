#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - Cuenta los nodos con al menos 1 hijo en un árbol binario.
* @tree: Un puntero al nodo raíz del árbol para contar los nodos con hijos.
* Return: El número de nodos con al menos 1 hijo en el árbol, o 0 si el árbol es NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_nodes, right_nodes;
/* Caso base: Si el árbol es NULL o es un nodo hoja, no hay nodos con hijos. */
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
/* Recursivamente contamos los nodos con al menos 1 hijo en los subárboles izquierdo y derecho. */
left_nodes = binary_tree_nodes(tree->left);
right_nodes = binary_tree_nodes(tree->right);
/* Retornamos la suma de los nodos con al menos 1 hijo en ambos subárboles más 1 (el nodo actual). */
return (left_nodes + right_nodes + 1);
}

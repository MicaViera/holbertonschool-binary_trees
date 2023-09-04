#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Mide el tamaño de un árbol binario.
 * @tree: Un puntero al nodo raíz del árbol para medir el tamaño.
 *
 * Return: El tamaño del árbol, o 0 si el árbol es NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

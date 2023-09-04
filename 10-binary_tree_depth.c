#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Mide la profundidad de un nodo en un árbol binario.
 * @tree: Un puntero al nodo cuya profundidad se va a medir.
 *
 * Return: La profundidad del nodo, o 0 si el árbol es NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}

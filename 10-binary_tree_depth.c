#include "binary_trees.h"

/**
 * binary_tree_depth - calculate depth
 * @tree: node from wich to calculate
 * Return: nothing
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *aux = NULL;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	aux = tree;

	while (aux->parent)
	{
		aux = aux->parent;
		count++;
	}
	return (count);
}

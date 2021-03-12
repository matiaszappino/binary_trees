#include "binary_trees.h"

/**
 * binary_tree_size - calculate size
 * @tree: node from wich to calculate
 * Return: nothing
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_size(tree->right);
	count += binary_tree_size(tree->left);
	return (count + 1);
}

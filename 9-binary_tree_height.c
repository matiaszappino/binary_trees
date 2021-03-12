#include "binary_trees.h"

/**
 * binary_tree_height - calculate height
 * @tree: node from wich to calculate
 * Return: nothing
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0, height_l = 0;

	if (tree == NULL)
		return (0);

	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	return (height_r > height_l ? height_r : height_l);
}

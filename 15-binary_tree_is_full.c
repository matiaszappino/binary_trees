#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a tree is full
 * @tree: node from wich to calculate
 * Return: 1 if full, 0 if not
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else
	{
		return (0);
	}
}

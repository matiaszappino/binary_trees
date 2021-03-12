#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: node from wich to calculate
 * Return: count
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_leaves(tree->right);
	count += binary_tree_leaves(tree->left);

	return (tree->right == NULL && tree->left == NULL ? count + 1 : count);
}

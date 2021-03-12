#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: node from wich to calculate
 * Return: count
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		count += binary_tree_nodes(tree->right);

	return (tree->left == NULL && tree->right == NULL ? count : count + 1);
}

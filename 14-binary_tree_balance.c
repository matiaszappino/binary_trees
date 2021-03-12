#include "binary_trees.h"

/**
 * binary_tree_height - measures the height
 * @tree: node from wich to calculate
 * Return: height
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0, height_l = 0;

	if (tree == NULL)
		return (0);

	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 1;

	return (height_r > height_l ? height_r : height_l);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: node from wich to calculate
 * Return: balance
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	count_l = (int)binary_tree_height(tree->left);
	count_r = (int)binary_tree_height(tree->right);
	return (count_l - count_r);
}

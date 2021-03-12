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

/**
 * print_tree - print binary tree level-order
 * @tree: the tree
 * @level: the level to print
 * @func: function to execute
 * Return: Nothing
 **/

void print_tree(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_tree(tree->left, level - 1, func);
		print_tree(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - print binary tree in level-order
 * @tree: the tree
 * @func: function to execute
 * Return: Nothing
 **/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0, i = 0;

	if (tree == NULL || func == NULL)
		return;
	level = binary_tree_height(tree) + 1;
	for (i = 1; i <= level; i++)
		print_tree(tree, i, func);
}

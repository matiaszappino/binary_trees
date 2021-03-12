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

	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	return (height_r > height_l ? height_r : height_l);
}


/**
 * _pow - function pow
 * @base: the base of the pow
 * @exp: the exponent of the pow
 * Return: the result of the pow
 **/

int _pow(int base, size_t exp)
{
	int pow = base;

	while (exp != 1)
	{
		pow *= base;
		exp--;
	}
	return (pow);
}

/**
 * binary_tree_is_perfect - check if a tree is perfect
 * @tree: node from wich to calculate
 * Return: 1 if full, 0 if not
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, size = 0, total = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	total = (_pow(2, (height + 1))) - 1;
	return (total == size ? 1 : 0);
}

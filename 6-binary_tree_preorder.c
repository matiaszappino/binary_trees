#include "binary_trees.h"

/**
 * binary_tree_preorder - go with preaorder
 * @tree: node
 * @func: pointer to func
 * Return: nothing
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

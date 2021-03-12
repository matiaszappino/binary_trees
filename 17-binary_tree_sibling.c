#include "binary_trees.h"

/**
 * binary_tree_sibling - check for sibling
 * @node: node from wich to calculate
 * Return: sibling node or null
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);
}

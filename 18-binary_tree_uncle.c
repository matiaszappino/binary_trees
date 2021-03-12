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

/**
 * binary_tree_uncle - check for uncle
 * @node: node from wich to calculate
 * Return: uncle node or null
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	else
		return (binary_tree_sibling(node->parent));
}

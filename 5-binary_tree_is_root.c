#include "binary_trees.h"

/**
 * binary_tree_is_root - find root
 * @node: root node
 * Return: 0 if not a leaf or 1 if it is a leaf
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL ? 1 : 0);
}

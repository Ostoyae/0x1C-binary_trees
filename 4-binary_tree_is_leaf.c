#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check is node is a leaf
 * @node: pointer to a node.
 *
 * Return: 1 if leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent && !node->left && !node->right)
		return (1);
	return (0);
}

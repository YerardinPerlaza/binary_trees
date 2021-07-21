#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is the root
 * @node: node to check
 * Return: 1 if root, 0 Otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}

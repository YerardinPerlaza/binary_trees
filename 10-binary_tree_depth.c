#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: node to calculate the depth from.
 * Return: depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	depth = 0;
	if (node == NULL)
		return (depth);

	for (; node->parent != NULL; depth++)
		node = node->parent;
	return (depth);
}

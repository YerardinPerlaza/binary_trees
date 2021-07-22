#include "binary_trees.h"
binary_tree_t *binary_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node we are looking to find the uncle
 * Return: Pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	uncle = binary_sibling(parent);
	return (uncle);
}
/**
 * binary_sibling - finds the sibling of a node
 * @node: the node we are looking to find the sibling
 * Return: pointer to the sibiling node
 */
binary_tree_t *binary_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;

	if (parent->left != node)
		return (parent->left);
	return (parent->right);
}
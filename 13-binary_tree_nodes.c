#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node leaf or not.
 *
 * @node: node to check if that
 *
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
/**
 * binary_tree_nodes -  counts the nodes with at least one child
 *
 * @tree: node to test
 *
 * Return: size of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);

	h_left = binary_tree_nodes(tree->left);
	h_right = binary_tree_nodes(tree->right);

	return (h_right + h_left + 1);
}

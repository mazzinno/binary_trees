#include "binary_trees.h"

/**
 * binary_tree_size -measures the size of a binary ..
 *
 * @tree: p to the root node of the tree.
 *
 * Return: 0 if tree is NULL else the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = binary_tree_size(tree->left);
	h_right = binary_tree_size(tree->right);

	return (h_right + 1 + h_left);
}

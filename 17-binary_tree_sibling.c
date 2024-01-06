#include "binary_trees.h"
/**
 * binary_tree_sibling - return the sibling of a node
 *
 * @node: node of a tree.
 *
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}

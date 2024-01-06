#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if its a leaf.
 *
 * @node: ptr to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}

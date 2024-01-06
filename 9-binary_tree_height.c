#include "binary_trees.h"

/**
 * binary_tree_isleaf - check node leaf or not
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_isleaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
/**
 * binary_tree_height - measures the height of a binary tree..
 *
 * @tree:  p to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (binary_tree_isleaf(tree) == 1)
		{
			return (0);
		}
		else
		{
			if (binary_tree_height(tree->left) >= binary_tree_height(tree->right))
			{
				return (binary_tree_height(tree->left) + 1);
			}
			else
			{
				return (binary_tree_height(tree->right) + 1);
			}
		}
	}
	else
	{
		return (0);
	}
}

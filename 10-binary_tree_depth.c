#include "binary_trees.h"

/**
 * binary_tree_isroot - checks if a given node is a root....
 *
 * @node: p to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
*/
int binary_tree_isroot(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
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
/**
 * binary_tree_depth -measures the depth of a node in a binary tree..
 *
 * @tree: pointer is a pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (binary_tree_isroot(tree) == 1 || tree == NULL)
	{
		return (0);
	}
	return (binary_tree_depth(tree->parent) + 1);
}

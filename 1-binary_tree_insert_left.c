#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a binary tree node
 *
 * @parent: pointer To the parent wooo
 * @value: the value to put in the node yeee
 *
 * Return: pointer t
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		binary_tree_t *tmp = parent->left;

		parent->left = binary_tree_node(parent, value);
		parent->left->left = tmp;
		parent->left->left->parent = parent->left;
		return (parent->left);
	}
}

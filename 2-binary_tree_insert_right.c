#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a binary
 *
 * @parent: pointer to the parent.
 * @value: the value to put in the node.
 *
 * Return: pointer to the n
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		binary_tree_t *tmp = parent->right;

		parent->right = binary_tree_node(parent, value);
		parent->right->right = tmp;
		parent->right->right->parent = parent->right;
		return (parent->right);
	}
}

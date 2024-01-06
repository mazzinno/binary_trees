#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversing
 *
 * @tree: p to the root node of the tree to traverse.
 * @func: p to a function to call for each node.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}

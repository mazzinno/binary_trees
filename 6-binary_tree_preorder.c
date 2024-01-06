#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversing
 *
 * @tree: ptr to the root node of the tree to traverse. 
 * @func: ptr to a function to call for each node...
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

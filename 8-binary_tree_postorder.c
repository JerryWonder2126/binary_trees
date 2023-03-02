#include "binary_trees.h"

/**
 * binary_tree_postorder - transverse a tree in postorder manner
 *
 * @tree: the head of the tree
 * @func: callback function to call on each node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
		func(tree->n);
	}
}

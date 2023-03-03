#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates the number of leaves down from a node
 *
 * @tree: the node to be checked
 * Return: 0 if tree is NULL else number of nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += tree->left || tree->right ? 0 : 1;
	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);

	return (size);
}

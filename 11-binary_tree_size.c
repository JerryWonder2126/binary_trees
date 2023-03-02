#include "binary_trees.h"

/**
 * binary_tree_size - calculates the number of nodes down to a
 *                      leaf from a node
 *
 * @tree: the node to be checked
 * Return: 0 if tree is NULL else number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left + right + 1);
}

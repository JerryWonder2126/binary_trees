#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the number of levels up to the
 *                      root from a node
 *
 * @tree: the node to be checked
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (height);
}

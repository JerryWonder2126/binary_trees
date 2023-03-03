#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates the number of roots from a node
 *
 * @tree: the node to be checked
 * Return: 0 if tree is NULL else number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	size += 1;
	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);

	return (size);
}

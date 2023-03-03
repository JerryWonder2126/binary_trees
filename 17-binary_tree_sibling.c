#include "binary_trees.h"

/**
 * binary_tree_sibling - gets the sibling of a node
 *
 * @node: the node to be checked
 * Return: the sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return ((node->parent->left == node)
		? node->parent->right : node->parent->left);
}

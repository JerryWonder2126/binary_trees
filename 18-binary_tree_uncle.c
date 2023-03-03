#include "binary_trees.h"

/**
 * binary_tree_uncle - gets the uncle of a node
 *
 * @node: the node to be checked
 * Return: the sibling of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	return ((node->parent->parent->left == node->parent)
		? node->parent->parent->right : node->parent->parent->left);
}

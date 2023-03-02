#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node in a binary tree
 *
 * @parent: the parent of the tree
 * @value: the value to be used to construct the node
 * Return: pointer to the newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_tree;

	temp_tree = malloc(sizeof(binary_tree_t));
	if (temp_tree == NULL)
	{
		return (NULL);
	}

	temp_tree->left = NULL;
	temp_tree->right = NULL;
	temp_tree->parent = parent;
	temp_tree->n = value;

	return (temp_tree);
}

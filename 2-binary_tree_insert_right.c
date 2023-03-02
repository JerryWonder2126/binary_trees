#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right of a tree
 *
 * @parent: the parent node of the tree
 * @value: the value to be used to create the new node
 * Return: pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (parent == NULL)
		return (NULL);

	temp_node = binary_tree_node(parent, value);
	if (temp_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = temp_node;
		temp_node->right = parent->right;
	}
	parent->right = temp_node;

	return (temp_node);
}

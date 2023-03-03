#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: the node to be checked
 * Return: 0 if tree is NULL else the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = tree_height(tree->left);
	rightHeight = tree_height(tree->right);

	return (leftHeight - rightHeight);
}


/**
 * tree_height - calculates the highest number of levels down to a
 *               leaf from a node
 *
 * @tree: the node to be checked
 * Return: 0 if tree is NULL else number of levels
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return (left > right ? left : right);
}

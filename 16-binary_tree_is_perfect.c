#include "binary_trees.h"


/**
 * tree_height - calculates the highest number of levels down to a
 *               leaf from a node
 *
 * @tree: the node to be checked
 * Return: 0 if tree is NULL else number of levels
 */
size_t s_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + tree_height(tree->left) : 1;
	right = tree->right ? 1 + tree_height(tree->right) : 1;

	return (left > right ? left : right);
}


/**
 * all_roots - Checks if a binary tree contains just roots recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree does not contains roots, 0.
 *         Otherwise, 1.
 */
int all_roots(const binary_tree_t *tree)
{
	int num_of_non_roots = 0;

	if (tree == NULL)
		return (0);

	all_roots(tree->left);
	all_roots(tree->right);
	num_of_non_roots += is_perfect(tree) ? 0 : 1;

	return (num_of_non_roots != 0 ? 0 : 1);
}


/**
 * is_perfect - checks if a node is perfect
 *
 * @tree: the node to be checked
 * Return: 1 if perfect else 0
 */
int is_perfect(const binary_tree_t *tree)
{
	if (tree->left || tree->right)
		return (tree->left && tree->right ? 1 : 0);

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not perfect - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight, rightHeight, is_perfect;

	if (tree == NULL)
		return (0);
	leftHeight = tree_height(tree->left);
	rightHeight = tree_height(tree->right);

	is_perfect = all_roots(tree) && (leftHeight == rightHeight)
		? 1 : 0;

	return (is_perfect);
}

#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);


/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int left_height, right_height;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t l_height = 1, r_height = 1;

	if (tree->left != NULL)
	{
		l_height = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		r_height = 1 + binary_tree_height(tree->right);
	}

	if (l_height > r_height)
	{
		return (l_height);
	}
	else
	{
		return (r_height);
	}
}

#include "binary_trees.h"

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

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t tree_size = 0;

	if (tree != NULL)
	{
		tree_size += 1;
		tree_size += binary_tree_size(tree->left);
		tree_size += binary_tree_size(tree->right);
	}

	return (tree_size);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t height, n_total, n_count;

	height = binary_tree_height(tree);

	n_total = (1 << height) - 1;

	n_count = binary_tree_size(tree);

	if (n_total == n_count)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

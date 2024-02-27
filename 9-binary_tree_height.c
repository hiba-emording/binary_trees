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

	size_t l_height = 0, r_height = 0;

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

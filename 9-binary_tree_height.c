#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
	{
		size_t l_height, r_height, max_height;

		l_height = binary_tree_height(tree->left);

		r_height = binary_tree_height(tree->right);

		max_height = l_height;

		if (r_height > l_height)
		{
			max_height = r_height;
		}

		return (max_height + 1);
	}
	else
	{
		return (0);
	}
}

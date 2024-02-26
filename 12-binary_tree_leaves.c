#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 *
 * Return: Number of leaves, or 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves_count = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			leaves_count += 1;
		}
		leaves_count += binary_tree_leaves(tree->left);
		leaves_count += binary_tree_leaves(tree->right);
	}

	return (leaves_count);
}

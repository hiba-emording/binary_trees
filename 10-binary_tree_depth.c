#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of tree or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL && tree->parent != NULL)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	else
	{
		return (0);
	}
}

#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: Number of nodes, or 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes_count = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			nodes_count += 1;
		}
		nodes_count += binary_tree_nodes(tree->left);
		nodes_count += binary_tree_nodes(tree->right);
	}

	return (nodes_count);
}

#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree new node.
 * @parent: Pointer to the parent of new node.
 * @value: Value of new node.
 *
 * Return: Pointer to new node (Success) or Null (Faliure).
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

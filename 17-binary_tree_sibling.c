#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: The node in a binary tree
 *
 * Return: The sibling node, NULL otherwise.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
		else
			return (NULL);
	}
	else
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
		else
			return (NULL);
	}
}

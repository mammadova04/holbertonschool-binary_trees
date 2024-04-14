#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: The binary tree
 *
 * Return: The count.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return ((binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right)) + 1);
}

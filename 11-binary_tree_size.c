#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The binary tree
 *
 * Return: The size of tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right));
}

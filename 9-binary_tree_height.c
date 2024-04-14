#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: The binary tree
 *
 * Return: Nothing.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	int left_h = binary_tree_height(tree->left);
	int right_h = binary_tree_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

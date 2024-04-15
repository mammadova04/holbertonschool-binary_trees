#include "binary_trees.h"
#include <stdio.h>

/**
 * tree_is_perfect - Checks if a tree is perfect
 * @tree: The binary tree
 *
 * Return: 1 if is perfect, 0 otherwise.
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);

		if (l == r && l != 0 && r != 0)
			return (r);

		return (0);
	}

	if (!tree->left && !tree->right)
		return (1);

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: The binary tree
 *
 * Return: 1 if is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);

	result = tree_is_perfect(tree);

	if (result != 0)
		return (1);

	return (0);
}

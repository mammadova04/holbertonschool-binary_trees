#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: The binary tree
 *
 * Return: The balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_h = 1 + binary_tree_balance(tree->left);
	}
	else
		left_h = 0;

	if (tree->right != NULL)
	{
		right_h = 1 + binary_tree_balance(tree->right);
	}
	else
		right_h = 0;

	return (left_h - right_h);
}

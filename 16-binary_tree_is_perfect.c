#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: The binary tree
 *
 * Return: The height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

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
		left_h = 1 + binary_tree_height(tree->left);
	}
	else
		left_h = 0;

	if (tree->right != NULL)
	{
		right_h = 1 + binary_tree_height(tree->right);
	}
	else
		right_h = 0;

	return (left_h - right_h);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: The binary tree
 *
 * Return: 1 if full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

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
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) ==
		binary_tree_height(tree->right) &&
		binary_tree_balance(tree) == 0 &&
		binary_tree_is_full(tree) == 1);
}

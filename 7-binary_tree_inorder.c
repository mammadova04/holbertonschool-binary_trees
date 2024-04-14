#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: The binary tree
 * @func: The function pointer
 *
 * Return: Nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

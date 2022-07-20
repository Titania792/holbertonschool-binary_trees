#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst - checks if a binary tree is a binary search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if it is a BST, 0 if it isn't
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (binary_helper(tree, INT_MIN, INT_MAX));
}

/**
 * binary_helper - checks if the given tree is a BST
 * and its values are >= min and <= max
 * @tree: pointer to the root node of the tree to check
 * Returns: true
 */
int binary_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (binary_helper(tree->left, min, tree->n-1) &&
			binary_helper(tree->right, tree->n+1, max));
}

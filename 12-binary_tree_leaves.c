#include "binary_trees.h"

/**
 * binary_tree_leaves - funtion that counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree to count
 * the number of leave.
 * Return: returns a counter with the number of leaves of a binary tree
 * if tree is NULL, the function must return 0.
 * A NULL pointer is not a leaf.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right  == NULL)
		return (1);
	return ((binary_tree_leaves(tree->left)) + (binary_tree_leaves(tree->right)));
}

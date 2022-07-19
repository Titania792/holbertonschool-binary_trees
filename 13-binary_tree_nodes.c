#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * 1 child i a binary tree.
 * @tree: is a pointer to the root node of the tree to count the number of node
 * if tree is NULL, the function must return 0.
 * A NULL pointer is not a node.
 * Return: returns the number of nodes that have a single leaf in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

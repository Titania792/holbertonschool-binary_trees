#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree.
 * @tree: is a pointer to root node of the tree to delete.
 * It tree is NULL do nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}

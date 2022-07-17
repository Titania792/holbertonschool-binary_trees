#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of a node
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	node->right = parent->right;
	if (parent->right != NULL)
		node->right->parent = node;
	parent->right = node;
	return (node);
}

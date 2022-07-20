#include "binary_trees.h"

/**
 * bst_insert - inserts a value into a binary search tree
 * @tree: double pointer to the root node of the tree to insert into
 * @value: value to insert into the tree
 * Return: pointer to the new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *parent, *current;

	if (!tree)
		return (NULL);
	if (!*tree)
	{
		*tree = malloc(sizeof(bst_t));
		if (!*tree)
			return (NULL);
		(*tree)->n = value;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
		(*tree)->parent = NULL;
		return (*tree);
	}
	current = *tree;
	parent = NULL;
	while (current)
	{
		parent = current;
		if (value < current->n)
			current = current->left;
		else if (value > current->n)
			current = current->right;
		else
			return (NULL);
	}
	new_node = malloc(sizeof(bst_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (value < parent->n)
		parent->left = new_node;
	else
		parent->right = new_node;
	return (new_node);
}

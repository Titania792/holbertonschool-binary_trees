#include "binary_trees.h"

/**
 * binary_tree_t - function that inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left child
 * @value: is the value to store in the new node
 * Return: return a pointer to the created node, or Null on failure or
 * if parent is null if parent already has a left child,
 * the new node must take its place, and the old left child must be set
 * as the left child of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *aux = NULL;

	if (parent == NULL)
		return (NULL);

	aux = binary_tree_node(parent, value);
	
	if (aux == NULL)
		return (NULL);

	aux->left = parent->left;

	if (parent->left != NULL)
		aux->left->parent = aux;
	parent->left = aux;
	return (aux);
}

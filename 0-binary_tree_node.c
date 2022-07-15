#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL);
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    node->value = value;
    return (node);
}
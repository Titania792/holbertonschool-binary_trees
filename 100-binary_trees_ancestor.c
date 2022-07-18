#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor of the two nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *fp, *sp;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	fp = first->parent;
	sp = second->parent;
	if (!fp || first == sp || (!fp->parent && sp))
		return (binary_trees_ancestor(first, sp));
	else if (!sp || second == fp || (!sp->parent && fp))
		return (binary_trees_ancestor(second, fp));
	return (binary_trees_ancestor(fp, sp));
}

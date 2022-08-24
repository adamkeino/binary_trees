#include "binary_trees.h"
/**
 * binary_tree_depth - finds depth
 * @node: the node to find depth of
 *
 * Return: the depth, or 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t counter = 0;

	if (node == NULL)
		return (0);
	while (node->parent != NULL)
	{
		counter++;
		node = node->parent;
	}
	return (counter);
}

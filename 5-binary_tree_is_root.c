#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is root
 * @node: the node to check
 *
 * Return: 1 if it's node, 0 if it's not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}

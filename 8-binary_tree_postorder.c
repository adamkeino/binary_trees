#include "binary_trees.h"
/**
 * binary_tree_postorder - post order traversal
 * @tree: the tree to be traversed
 * @func: function to work recursively on nodes
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

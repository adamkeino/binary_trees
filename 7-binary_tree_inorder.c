#include "binary_trees.h"
/**
 * binary_tree_inorder - inoder traversal
 * @tree: the tree to traverse
 * @func: function applied recursively to nodes
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

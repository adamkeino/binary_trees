#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: the node to be checked
 *
 * Return: 1 if leaf, 0 if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node == NULL)
                return (0);
        if (node->left == NULL && node->right == NULL)
                return (1);
        else
                return (0);
}

/**
 * binary_tree_height - checks the height of tree
 * @tree: The tree.
 *
 * Return: 0 if NULL, else the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;
	
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

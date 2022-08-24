#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts right child
 * @parent: the parent to the right child
 * @value: the value in the new node
 *
 * Return: pointer to the right child created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);
	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
		return (NULL);
	new_right->right = parent->right;
	if (new_right->right != NULL)
		new_right->right->parent = new_right;
	parent->right = new_right;

	return (new_right);
}

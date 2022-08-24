#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: the node to be inserted to
 * @value: the value of the new left node
 *
 * Return: pointer to the new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;


	if (parent == NULL)
		return (NULL);
	new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
		return (NULL);
	new_left->left = parent->left;
	if (new_left->left != NULL)
		new_left->left->parent = new_left;
	parent->left = new_left;

	return (new_left);
}

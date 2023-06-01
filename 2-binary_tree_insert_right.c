#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert node as right-child
 * @parent: pointer to parent node
 * @value: value in the node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = calloc(1, sizeof(binary_tree_t));
	if (!node || !parent)
		return (NULL);

	node->n = value;
	node->parent = parent;

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;

	return (node);
}
